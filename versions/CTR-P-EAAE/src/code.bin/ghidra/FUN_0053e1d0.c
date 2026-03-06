/**
 * FUN_0053e1d0.c
 * Source line: 783018
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_0053e1d0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((((char)param_1[0x13] != '\0') && (param_3 != 0)) &&
      (iVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_3), iVar1 != 0)) && (param_2 != 0)) {
          // WARNING: Could not recover jumptable at 0x0053e230. Too many branches
          // WARNING: Treating indirect jump as call
    uVar2 = (**(code **)(*param_1 + 0x44))(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}
