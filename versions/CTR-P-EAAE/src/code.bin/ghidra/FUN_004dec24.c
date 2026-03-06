/**
 * FUN_004dec24.c
 * Source line: 724155
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_004dec24(uint param_1)

{
  byte *pbVar1;
  
  if ((param_1 < 2) &&
     ((*(byte *)((int)&DAT_00953564 + (param_1 >> 3) + 2) >> (param_1 & 7) & 1) != 0)) {
    pbVar1 = (byte *)((int)&DAT_00953564 + (param_1 >> 3) + 3);
    *pbVar1 = *pbVar1 & ~(byte)(1 << (param_1 & 7));
    if (param_1 == 0) {
      FUN_0058cc04();
      return;
    }
    if (param_1 == 1) {
      FUN_0058cbd4();
      return;
    }
  }
  return;
}
