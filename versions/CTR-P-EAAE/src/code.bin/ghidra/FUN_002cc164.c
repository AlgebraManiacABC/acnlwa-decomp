/**
 * FUN_002cc164.c
 * Source line: 367031
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_002cc164(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3520);
  if (((int)param_2 < iVar1) || (iVar1 + 10U <= param_2)) {
    iVar1 = -1;
  }
  else {
    iVar1 = param_2 - iVar1;
  }
          // WARNING: Could not recover jumptable at 0x002cc1a8. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*(int *)(param_1 + iVar1 * 0x2b4 + 0x18d4) + 0x60))();
  return;
}
