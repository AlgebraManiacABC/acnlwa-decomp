/**
 * FUN_001df61c.c
 * Source line: 245843
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_001df61c(byte *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_2 + (((uint)*param_1 << 0x1a) >> 0x1d);
  if (7 < uVar1) {
    if (param_2 < 1) {
      uVar1 = 0;
    }
    else {
      uVar1 = 7;
    }
  }
  *param_1 = *param_1 & 199 | (byte)((uVar1 & 7) << 3);
  return;
}
