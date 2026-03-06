/**
 * FUN_00384374.c
 * Source line: 490358
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00384374(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)(param_2 + 0x105c);
  (**(code **)(*piVar1 + 8))();
  uVar2 = FUN_0046ed3c(param_2 + 0x38,param_3,param_4);
  FUN_003849a4(param_1,uVar2);
          // WARNING: Could not recover jumptable at 0x003843cc. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return;
}
