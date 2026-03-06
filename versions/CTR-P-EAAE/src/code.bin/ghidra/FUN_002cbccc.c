/**
 * FUN_002cbccc.c
 * Source line: 366920
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_002cbccc(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3ca0);
  if (((int)param_2 < iVar1) || (iVar1 + 10U <= param_2)) {
    iVar1 = -1;
  }
  else {
    iVar1 = param_2 - iVar1;
  }
  if (iVar1 < 0) {
    iVar1 = 0;
  }
          // WARNING: Could not recover jumptable at 0x002cbd18. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*(int *)(param_1 + iVar1 * 0x36c + 0x1888) + 0x60))();
  return;
}
