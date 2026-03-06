/**
 * FUN_001b488c.c
 * Source line: 221070
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_001b488c(int param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;
  
  param_1 += (((uint)(param_5 << 0x1e) >> 0x17) + (param_4 & 0x1f) * 4 + ((param_3 & 0x1f) >> 3)) *
             4;
  uVar1 = ((param_3 & 0x1f) << 0x1d) >> 0x1b;
  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & ~(0xf << uVar1) | (param_2 & 0xf) << uVar1
  ;
  return;
}
