use std::ffi::{CStr, CString};

use eyre::{Context, bail};
use tracing::debug;
use zerocopy::IntoBytes;

use crate::icu::commands::CommandOp;

pub mod commands;
pub mod usb;

pub struct ICU<Transport: ICUTransport> {
  transport: Transport,
  // version: Option<FirmwareVersion>,
}

impl<Transport: ICUTransport> ICU<Transport> {
  pub fn new(transport: Transport) -> Self {
    Self {
      transport,
      // version: None,
    }
  }

  // fn fetch_firmware_version(&mut self) -> eyre::Result<FirmwareVersion> {
  //   if let Some(firmware_version) = &self.version {
  //     return Ok(firmware_version.clone());
  //   } else {
  //     let version = self.read_firmware_version()?;
  //     Ok(self.version.insert(version).clone())
  //   }
  // }

  // fn icu_command_ver(&mut self) -> eyre::Result<u8> {
  //   let firmware_version = self.fetch_firmware_version()?;
  //   todo!()
  // }

  pub fn read_hardware_id(&mut self) -> eyre::Result<HardwareId> {
    let message = [
      encode_op_word(0, CommandOp::ReadHardwareId, 0x20c),
      0,
      0,
      0,
      0,
    ];

    let message = self.transport.transfer(message)?;

    Ok(HardwareId {
      pcb: message[0] as u8,
      bom: (message[0] >> 8) as u8,
    })
  }

  pub fn read_firmware_version(&mut self) -> eyre::Result<FirmwareVersion> {
    let message = [
      encode_op_word(0, CommandOp::ReadFirmwareVersion, 0x20c),
      0,
      0,
      0,
      0,
    ];

    let message = self.transport.transfer(message)?;
    debug!("firmware version response: {:08X}", message[0]);

    Ok(FirmwareVersion {
      major: (message[1] & 0x0000FFFF) as u16,
      minor: ((message[1] & 0xFFFF0000) >> 16) as u16,
      revision: (message[2] & 0x0000FFFF) as u16,
      image: (message[3] & 0xFF) as u8,
      image_after_reset: ((message[3] & 0xFF) >> 8) as u8,
    })
  }

  pub fn read_image_version(&mut self, image: Image) -> eyre::Result<ImageVersion> {
    let message = [
      encode_op_word(0, CommandOp::ReadImageVersion, 0x20c),
      image as u32,
      0,
      0,
      0,
    ];

    let message = self.transport.transfer(message)?;

    if message[1] != 0 {
      bail!("invalid image id");
    }

    Ok(ImageVersion {
      major: (message[1] & 0x0000FFFF) as u16,
      minor: ((message[1] & 0xFFFF0000) >> 16) as u16,
      revision: (message[2] & 0x0000FFFF) as u16,
    })
  }

  pub fn read_board_type(&mut self) -> eyre::Result<CString> {
    let message = [
      encode_op_word(0, CommandOp::ReadBoardType, 0x20c),
      0,
      0,
      0,
      0,
    ];

    let message = self.transport.transfer(message)?;

    let str = CStr::from_bytes_until_nul(message.as_bytes())
      .context("returned string was not a cstring")?;
    Ok(str.to_owned())
  }

  pub fn read_boot_status(&mut self) -> eyre::Result<BootStatus> {
    let message = [
      encode_op_word(0, CommandOp::ReadBootStatus, 0x20c),
      0,
      0,
      0,
      0,
    ];

    let message = self.transport.transfer(message)?;

    Ok(BootStatus {
      reset_status: message[1],
      selected: message[2],
    })
  }

  pub fn upgrade(
    &mut self,
    target: UpgradeTarget,
    data: &[u8],
    ignore_result_failure: bool,
  ) -> eyre::Result<()> {
    let op = match target {
      UpgradeTarget::Bootloader => CommandOp::StartBootloaderUpgrade,
      UpgradeTarget::Firmware => CommandOp::StartFirmwareUpgrade,
    };
    let message = [encode_op_word(0, op, 0x20c), data.len() as u32, 0, 0, 0];
    let message = self.transport.transfer(message)?;

    if message[1] != 0 {
      bail!("failed to start firmware upgrade");
    }

    let mut transfer_error = None;
    for chunk in data.chunks(0x10) {
      let mut message = [
        encode_op_word(0, CommandOp::WriteUpgradeChunk, 0x20c),
        0,
        0,
        0,
        0,
      ];
      message[1..5].as_mut_bytes()[..chunk.len()].copy_from_slice(chunk);
      let message = self.transport.transfer(message)?;

      if message[1] != 0 {
        transfer_error = Some(message[1]);
        break;
      }
    }

    let message = [
      encode_op_word(0, CommandOp::CompleteUpgrade, 0x20c),
      0,
      0,
      0,
      0,
    ];
    let message = self.transport.transfer(message)?;

    if message[1] != 0 {
      transfer_error = Some(message[1]);
    }

    if !ignore_result_failure && let Some(transfer_error) = transfer_error {
      bail!("error while transfering firmware to ICU: {transfer_error}");
    }

    Ok(())
  }
}

pub enum UpgradeTarget {
  Bootloader,
  Firmware,
}

#[derive(Clone, Debug)]
pub struct HardwareId {
  pub pcb: u8,
  pub bom: u8,
}

#[derive(Clone, Debug)]
pub struct FirmwareVersion {
  pub major: u16,
  pub minor: u16,
  pub revision: u16,
  pub image: u8,
  pub image_after_reset: u8,
}

#[derive(Clone, Debug)]
pub struct BootStatus {
  pub reset_status: u32,
  pub selected: u32,
}

pub enum Image {
  Image0 = 0,
  Image1 = 1,
  Bootloader = 2,
}

#[derive(Clone, Debug)]
pub struct ImageVersion {
  pub major: u16,
  pub minor: u16,
  pub revision: u16,
}

// ICU

pub type ICUMessage = [u32; 5];

pub fn encode_op_word(version: u8, op: CommandOp, lower: u16) -> u32 {
  (version as u32) << 28 | (op as u32) << 16 | lower as u32
}

pub const MESSAGE_SIZE: usize = std::mem::size_of::<ICUMessage>();

pub trait ICUTransport {
  fn transfer(&mut self, message: ICUMessage) -> eyre::Result<ICUMessage>;
}
