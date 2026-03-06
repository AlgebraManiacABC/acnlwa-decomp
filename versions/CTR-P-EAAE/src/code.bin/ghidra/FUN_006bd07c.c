/**
 * FUN_006bd07c.c
 * Source line: 1019098
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_006bd07c(int param_1,uint param_2)

{
  byte *pbVar1;
  
  if (param_2 < 399) {
    if (param_2 >> 3 < 0x32) {
      pbVar1 = (byte *)(param_1 + (param_2 >> 3) + 0x8f3c);
      *pbVar1 = *pbVar1 | (byte)(1 << (param_2 & 7));
    }
  }
  return;
}
