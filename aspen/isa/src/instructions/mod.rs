use crate::enums::SyncZone;

pub enum Instructions {
  // Bit instructions
  And(And),

  // System instructions
  /// A general synchronization instruction. It may wait for all tiles to complete an operation,
  /// or wait for a tile or the host to send a message to it. The (sync_zone)[SyncZone] operand
  /// determines which event causes code exection to continues.
  Sync {
    sync_zone: SyncZone,
  }
}

enum And {
  /// `and $mDst, $mSrc0, $mSrc1`
  MemoryReg {

  },
  /// `and $mDst, $mSrc, $zimm12`
  MemoryImm {
    dest: u8,
    src: u8,
    imm: u16,
  },
}
