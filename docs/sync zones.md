Sync zones define what part of the system the [[instructions#`sync`|sync]] instruction is a barrier for. The `TileSyncZone` enum provides a rough idea of what each one does:
```cpp
enum TileSyncZone {
  // recv: synchronize on receiving data
  TEXCH_SYNCZONE_RECV = 0,
  // unknown...
  TEXCH_SYNCZONE_ANS = 1,
  // local: synchronize with all contexts/threads in a single tile
  TEXCH_SYNCZONE_LOCAL = 2,
  // internal: synchronize with other tiles in an ipu
  TEXCH_SYNCZONE_INTERNAL = 3,
  TEXCH_SYNCZONE_INTERNAL0 = 3,
  // external: synchronize across IPUs and/or with the host (see below)
  TEXCH_SYNCZONE_EXTERNAL0_SLV = 4,
  TEXCH_SYNCZONE_EXTERNAL1_SLV = 5,
  TEXCH_SYNCZONE_EXTERNAL2_SLV = 6,
  TEXCH_SYNCZONE_EXTERNAL3_SLV = 7,
  TEXCH_SYNCZONE_EXTERNAL0_MSR = 12,
  TEXCH_SYNCZONE_EXTERNAL1_MSR = 13,
  TEXCH_SYNCZONE_EXTERNAL2_MSR = 14,
  TEXCH_SYNCZONE_EXTERNAL3_MSR = 15,
  
  // external: Sync Group 1 (without host?)
  TEXCH_SYNCZONE_GS1 = 4,
  TEXCH_SYNCZONE_GS1_MSR = 12,
  // external: Sync Group 1 (with host?)
  TEXCH_SYNCZONE_GS1H = 5,
  TEXCH_SYNCZONE_GS1H_MSR = 13,
  // external: Sync Group 2 (without host?)
  TEXCH_SYNCZONE_GS2 = 6,
  TEXCH_SYNCZONE_GS2_MSR = 14,
  // external: Sync Group 2 (with host?)
  TEXCH_SYNCZONE_GS2H = 7,
  TEXCH_SYNCZONE_GS2H_MSR = 15,
};
```