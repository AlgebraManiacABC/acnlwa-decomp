/**
 * FUN_002cc76c.c
 * Source line: 367235
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_002cc76c(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2780);
  if (((int)param_2 < iVar1) || (iVar1 + 8U <= param_2)) {
    iVar1 = -1;
  }
  else {
    iVar1 = param_2 - iVar1;
  }
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  param_1 += iVar1 * 0x36c;
          // WARNING: Could not recover jumptable at 0x002cc7b4. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*(int *)(param_1 + 0xa40) + 0x60))(param_1 + 0xa40);
  return;
}
