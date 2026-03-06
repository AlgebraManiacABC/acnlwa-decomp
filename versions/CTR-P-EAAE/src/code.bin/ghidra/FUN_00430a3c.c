/**
 * FUN_00430a3c.c
 * Source line: 597184
 * Body lines: 11
 */
#include "../../../include/types.h"

int FUN_00430a3c(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 - 0x100000U < 0x3ff00000) {
    param_1[0x10] = param_2;
    FUN_004261dc(param_2);
  }
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if (-1 < iVar1) {
    FUN_00448f94(uRam0097d428);
    (**(code **)(*param_1 + 0x20))(param_1);
  }
  return iVar1;
}
