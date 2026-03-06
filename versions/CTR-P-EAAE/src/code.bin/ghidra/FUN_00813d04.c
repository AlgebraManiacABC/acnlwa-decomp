/**
 * FUN_00813d04.c
 * Source line: 1222283
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_00813d04(int param_1,uint param_2)

{
  byte *pbVar1;
  
  if (param_2 < 0x60) {
    pbVar1 = (byte *)(param_1 + (param_2 >> 3));
    *pbVar1 = *pbVar1 & ~(byte)(1 << (param_2 & 7));
  }
  return;
}
