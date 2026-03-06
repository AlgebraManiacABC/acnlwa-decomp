/**
 * FUN_004ab47c.c
 * Source line: 685847
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_004ab47c(undefined4 param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  
  if (param_3 == param_4) {
    return;
  }
  iVar1 = *param_3;
  if (iVar1 != 0) {
    iVar1 += (int)param_3;
  }
  (**(code **)(*param_2 + 0xc))(param_2,iVar1);
          // WARNING: Could not recover jumptable at 0x004ab4c0. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*param_2 + 0xc))(param_2,param_3);
  return;
}
