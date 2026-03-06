/**
 * FUN_004cdff0.c
 * Source line: 712997
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_004cdff0(int *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = __aeabi_uidivmod(param_2 - *param_1,param_1[2]);
  *(byte *)((int)param_1 + (uVar1 >> 3) + 0x14) =
       *(byte *)((int)param_1 + (uVar1 >> 3) + 0x14) & ~(byte)(1 << (uVar1 & 7));
  param_1[4] = param_1[4] + -1;
  return;
}
