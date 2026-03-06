/**
 * FUN_0065d3e0.c
 * Source line: 969063
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0065d3e0(int param_1)

{
  FUN_001d1cd0(0x3f800000,param_1 + 0x1b4);
  if ((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0) {
    FUN_003041c8();
  }
  *(byte *)(param_1 + 0x176) = *(byte *)(param_1 + 0x176) & 0xfd;
  DAT_00aaef14 |= 8;
  *(undefined4 *)(param_1 + 0x154c) = 0;
  return;
}
