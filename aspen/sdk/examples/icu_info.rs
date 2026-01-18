use aspen_sdk::icu::{ICU, Image, usb::USBTransport};
use tracing::{error, info};

fn main() {
  tracing_subscriber::fmt().init();
  let transport = USBTransport::first_device()
    .unwrap()
    .expect("no graphcore card could be found");

  let mut icu = ICU::new(transport);

  match icu.read_board_type() {
    Ok(board_type) => {
      info!("board type: {board_type:?}")
    }
    Err(error) => {
      error!("failed to read board type: {error}")
    }
  }

  match icu.read_firmware_version() {
    Ok(version) => {
      info!("firmware revision: {version:?}")
    }
    Err(error) => {
      error!("failed to read firmware revision: {error}")
    }
  }

  let mut print_image = |image| match icu.read_image_version(image) {
    Ok(version) => {
      info!("image version: {version:?}")
    }
    Err(error) => {
      error!("failed to read image version: {error}")
    }
  };

  print_image(Image::Image0);
  print_image(Image::Image1);
  print_image(Image::Bootloader);

  match icu.read_boot_status() {
    Ok(boot_status) => {
      info!("boot status: {boot_status:?}")
    }
    Err(error) => {
      error!("failed to read boot status: {error}")
    }
  }

}
