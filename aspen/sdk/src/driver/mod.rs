pub mod discovery;
mod ioctls;

use std::{
  ffi,
  fs::{self, File, read_dir},
  io,
  ops::Range,
  os::fd::{AsFd, AsRawFd, RawFd},
  path::{Path, PathBuf},
  ptr,
  sync::atomic::{AtomicBool, Ordering},
};

use eyre::Context;
use memmap2::MmapMut;
use zerocopy::FromBytes;

struct Opaque;
pub struct DeviceDriver {
  config_file: File,
  config_space: MmapMut,
  exchange_file: File,
  exchange_space: MmapMut,
}

impl DeviceDriver {
  fn config_fd(&self) -> RawFd {
    self.config_file.as_raw_fd()
  }

  fn exchange_fd(&self) -> RawFd {
    self.exchange_file.as_raw_fd()
  }

  /// A mutable view into the config space of the IPU device.
  pub fn config_space_mut(&mut self) -> &mut [u32] {
    FromBytes::mut_from_bytes(&mut self.config_space).expect("misaligned config space map")
  }

  /// A view into the config space of the IPU device.
  pub fn config_space(&self) -> &[u32] {
    FromBytes::ref_from_bytes(&self.config_space).expect("misaligned config space map")
  }

  pub fn exchange_space_mut(&mut self) -> &mut [u32] {
    FromBytes::mut_from_bytes(&mut self.exchange_space).expect("misaligned exchange space map")
  }

  pub fn exchange_space(&self) -> &[u32] {
    FromBytes::ref_from_bytes(&self.exchange_space).expect("misaligned exchange space map")
  }

  pub fn reset(&mut self) -> nix::Result<()> {
    unsafe { ioctls::reset(self.config_fd(), 0).map(drop) }
  }
}
