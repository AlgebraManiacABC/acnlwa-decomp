/**
 * FUN_0043127c.c
 * Source line: 597446
 * Body lines: 9
 */
#include "../../../include/types.h"

uint FUN_0043127c(int *param_1)

{
  int iVar1;
  uint unaff_r4;
  
  iVar1 = FUN_00448db8(uRam0097d428);
  if (iVar1 != 0) {
    FUN_00448b84(uRam0097d428);
    (**(code **)(*param_1 + 0x3c))(param_1);
    return unaff_r4 & 0xff00;
  }
  return unaff_r4 & 0xff00 | 5;
}
