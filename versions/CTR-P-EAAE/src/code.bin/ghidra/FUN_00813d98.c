/**
 * FUN_00813d98.c
 * Source line: 1222335
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_00813d98(int param_1,uint param_2)

{
  byte *pbVar1;
  
  if (param_2 < 10) {
    pbVar1 = (byte *)(param_1 + ((int)(param_2 + ((uint)((int)param_2 >> 0x1f) >> 0x1d)) >> 3));
    *pbVar1 = *pbVar1 | (byte)(1 << (param_2 & 7));
  }
  return;
}
