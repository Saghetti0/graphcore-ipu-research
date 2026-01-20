pub enum CommandOp {
  ReadHardwareId = 3,
  ReadFirmwareVersion = 4,
  ReadBoardType = 5,
  ReadImageVersion = 13,
  ReadBootStatus = 17,
  StartFirmwareUpgrade = 40,
  WriteUpgradeChunk = 41,
  CompleteUpgrade = 42,
  StartBootloaderUpgrade = 43,
}
