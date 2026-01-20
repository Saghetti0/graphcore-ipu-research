use std::{env, fs};

use aspen_sdk::icu::{ICU, UpgradeTarget, usb::USBTransport};
use tracing::{error, info};

fn main() {
  tracing_subscriber::fmt()
    .with_max_level(tracing::Level::TRACE)
    .init();
  let image = env::args().nth(1).expect("put the image path in the first argument");
  let image = fs::read(image).expect("failed to read image");
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

  icu.upgrade(UpgradeTarget::Firmware, &image, false).expect("failed!");

  info!("complete!");
}
