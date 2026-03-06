/**
 * FUN_006cce5c.c
 * Source line: 1029234
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_006cce5c(int param_1,int param_2,int param_3,uint param_4,undefined4 param_5)

{
  byte *pbVar1;
  uint uVar2;
  
  uVar2 = param_3 + param_2 * 6;
  FUN_001b49b0(param_1 + (param_4 + uVar2 * 4) * 0x870 + 4,param_5);
  pbVar1 = (byte *)(param_1 + (uVar2 >> 1) + 0x25f84);
  if ((uVar2 & 1) != 0) {
    param_4 += 4;
  }
  *pbVar1 = *pbVar1 | (byte)(1 << (param_4 & 0xff));
  return;
}
