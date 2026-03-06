/**
 * FUN_0053e82c.c
 * Source line: 783313
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_0053e82c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((((char)param_1[0x13] != '\0') && (param_2 != 0)) &&
     (iVar1 = (**(code **)(*param_1 + 0x20))(param_1), iVar1 != 0)) {
          // WARNING: Could not recover jumptable at 0x0053e88c. Too many branches
          // WARNING: Treating indirect jump as call
    uVar2 = (**(code **)(*param_1 + 0x40))(param_1,param_2,param_3,param_4);
    return uVar2;
  }
  return 0;
}
