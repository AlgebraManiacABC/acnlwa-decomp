/**
 * FUN_0029c8d8.c
 * Source line: 341372
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0029c8d8(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_0075b8ec(param_1 + 0xbc);
  if (iVar1 != 0) {
          // WARNING: Could not recover jumptable at 0x0029c904. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*param_2 + 0x1c))(param_2);
    return;
  }
          // WARNING: Could not recover jumptable at 0x0029c918. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*param_2 + 0x14))(param_2,param_1 + 0xbc);
  return;
}
