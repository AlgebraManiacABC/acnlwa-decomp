/**
 * FUN_005c38c8.c
 * Source line: 873098
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_005c38c8(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  byte *pbVar1;
  uint local_8;
  
  local_8 = param_4 & 0xffff0000;
  if (param_1 < 10) {
    pbVar1 = (byte *)((int)&local_8 + (param_1 >> 3));
    *pbVar1 = *pbVar1 | (byte)(1 << (param_1 & 7));
  }
  FUN_005c3620(&local_8);
  return;
}
