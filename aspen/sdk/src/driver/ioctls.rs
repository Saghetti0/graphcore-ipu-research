const IPU: u8 = 0xed;

nix::ioctl_readwrite!(attach, IPU, 10, u64);
nix::ioctl_readwrite!(attach_buffer, IPU, 11, u64);
nix::ioctl_readwrite!(detach_buffer, IPU, 12, u64);
nix::ioctl_readwrite!(set_ipu_id, IPU, 14, ());
nix::ioctl_readwrite!(mask_interrupt, IPU, 22, u64);
nix::ioctl_readwrite!(unmask_interrupt, IPU, 23, u64);
nix::ioctl_read!(mailbox_read_only, IPU, 29, u64);
nix::ioctl_write_buf!(mailbox_write_only, IPU, 30, u64);
nix::ioctl_write_buf!(mailbox_write_read, IPU, 31, u64);
nix::ioctl_read!(mailbox_get_offsets, IPU, 32, u64);
nix::ioctl_write_int!(reset, IPU, 45);
