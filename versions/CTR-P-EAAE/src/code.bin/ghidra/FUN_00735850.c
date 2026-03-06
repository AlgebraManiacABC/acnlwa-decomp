/**
 * FUN_00735850.c
 * Source line: 1090908
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_00735850(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00734798(param_1 + 4,param_2 + 4);
  if ((iVar1 == 0) || (iVar1 = FUN_00734798(param_1 + 0x2c,param_2 + 0x2c), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
