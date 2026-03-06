/**
 * FUN_002f7ef4.c
 * Source line: 390289
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_002f7ef4(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2434);
  if (((int)param_2 < iVar1) || (iVar1 + 4U <= param_2)) {
    iVar1 = -1;
  }
  else {
    iVar1 = param_2 - iVar1;
  }
          // WARNING: Could not recover jumptable at 0x002f7f38. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*(int *)(param_1 + iVar1 * 0x290 + 0x18b4) + 0x60))();
  return;
}
