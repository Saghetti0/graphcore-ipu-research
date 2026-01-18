use std::{
  io::{Read, Write},
  time::Duration,
};

use eyre::{Context, ContextCompat, bail};
use nusb::{
  Device, MaybeFuture,
  descriptors::language_id::US_ENGLISH,
  io::{EndpointRead, EndpointWrite},
  transfer::{Bulk, In, Out},
};
use tracing::debug;
use zerocopy::IntoBytes;

use crate::icu::{ICUMessage, ICUTransport, MESSAGE_SIZE};

pub struct USBTransport {
  in_ep: EndpointRead<Bulk>,
  out_ep: EndpointWrite<Bulk>,
}

impl USBTransport {
  pub fn first_device() -> eyre::Result<Option<Self>> {
    let first_device = nusb::list_devices()
      .wait()
      .context("failed to list usb devices")?
      .find(|device| device.vendor_id() == 0xbbbc);

    let Some(device) = first_device else {
      return Ok(None);
    };

    let device = device.open().wait().context("failed to open the device")?;

    Self::new(device).map(Some)
  }

  pub fn new(device: Device) -> eyre::Result<Self> {
    let descriptor = device.device_descriptor();
    if descriptor.vendor_id() != 0xbbbc {
      bail!("not a device with the Graphcore vendor id");
    }

    debug!(
      "Vendor: {:04x}, Product: {:04x}",
      descriptor.vendor_id(),
      descriptor.product_id()
    );

    let product_string = descriptor
      .product_string_index()
      .context("failed to fetch product string index")?;
    let product_string = device
      .get_string_descriptor(product_string, US_ENGLISH, Duration::from_secs(5))
      .wait()
      .context("device did not respond with product string")?;
    debug!("ICU version: {product_string}");

    let main_interface = device
      .configurations()
      .find_map(|cfg| cfg.interfaces().find(|iface| iface.interface_number() == 0))
      .context("the expected interface was not found")?;

    let interface = device
      .claim_interface(main_interface.interface_number())
      .wait()
      .context("failed to claim interface")?;
    let in_ep = interface
      .endpoint::<Bulk, In>(0x81)
      .context("failed to get IN endpoint")?
      .reader(MESSAGE_SIZE);
    let out_ep = interface
      .endpoint::<Bulk, Out>(0x1)
      .context("failed to get IN endpoint")?
      .writer(MESSAGE_SIZE);

    Ok(Self { in_ep, out_ep })
  }
}

impl ICUTransport for USBTransport {
  fn transfer(&mut self, message: ICUMessage) -> eyre::Result<ICUMessage> {
    self
      .out_ep
      .write_all(message.as_bytes())
      .context("failed to send message")?;

    let mut out_message: ICUMessage = [0; 5];
    self
      .in_ep
      .read_exact(out_message.as_mut_bytes())
      .context("failed to receive message")?;

    Ok(out_message)
  }
}
