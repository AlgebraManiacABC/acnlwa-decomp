/**
 * FUN_0011279e.c
 * Source line: 113487
 * Body lines: 6
 */
#include "../../../include/types.h"

uint FUN_0011279e(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((uint)*(byte *)(param_1 + 0x1f) << 0x1c) >> 0x1f;
  }
  return uVar1;
}
