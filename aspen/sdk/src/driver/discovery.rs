use std::{
  ffi,
  fs::{self, File, read_dir},
  io,
  ops::Range,
  os::fd::{AsFd, AsRawFd},
  path::{Path, PathBuf},
  ptr,
  sync::atomic::{AtomicBool, Ordering},
};

use eyre::Context;
use memmap2::MmapMut;

use crate::driver::{DeviceDriver, ioctls};
pub struct DiscoveredDevice {
  filename_id: u32,
  // device: u32,
  // board_name: String,
  // board_variant_name: String,
  // serial: String,
  // firmware_version_int: i32,
  // firmware_version: String,
  // bootloader_version: String,
  // current_link_speed: String,
  // parity_init_flag: i32,
  // numa_node: Option<u32>,
  // continuous_memory_nodes: Vec<Range<ffi::c_ulong>>,
}

impl DiscoveredDevice {
  pub fn attach(&self) -> eyre::Result<DeviceDriver> {
    let config_file = File::open(format!("/dev/ipu{}", self.filename_id))
      .context("failed to open config device")?;
    let exchange_file = File::open(format!("/dev/ipu{}_ex", self.filename_id))
      .context("failed to open exchange device")?;

    let config_space =
      unsafe { MmapMut::map_mut(&config_file).context("failed to map config space")? };
    let exchange_space =
      unsafe { MmapMut::map_mut(&exchange_file).context("failed to map exchange space")? };

    unsafe {
      ioctls::attach(config_file.as_raw_fd(), ptr::null_mut())
        .context("failed to attach process to the device")?;
      ioctls::set_ipu_id(config_file.as_raw_fd(), self.filename_id as _)
        .context("failed to set ipu id")?;
    }

    Ok(DeviceDriver {
      config_file,
      config_space,

      exchange_file,
      exchange_space,
    })
  }

  pub fn driver_id(&self) -> u32 {
    self.filename_id
  }
}

pub fn list_devices() -> eyre::Result<Vec<DiscoveredDevice>> {
  let base = PathBuf::from("/sys/bus/pci/devices");
  let devices = read_dir(&base).context("failed to scan for pci devices")?;
  devices
    .filter_map(|res| res.ok().map(|a| a.file_name()))
    .map(|file_name| -> eyre::Result<DiscoveredDevice> {
      let file_name = fs::read_to_string(base.join(file_name).join("file_name"))?;
      let filename_id = file_name.parse().context("failed to parse filename")?;

      Ok(DiscoveredDevice { filename_id })
    })
    .collect::<eyre::Result<Vec<_>>>()
}
