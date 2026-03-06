/**
 * FUN_00425640.c
 * Source line: 589280
 * Body lines: 11
 */
#include "../../../include/types.h"

uint FUN_00425640(int *param_1)

{
  int iVar1;
  uint unaff_r5;
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if (iVar1 < 0) {
    FUN_00426224(param_1[0x15],iVar1);
  }
  else {
    FUN_00426270(param_1[0x15],0);
  }
  param_1[0x15] = 0;
  return unaff_r5 & 0xff00 | 1;
}
