/**
 * FUN_007790a8.c
 * Source line: 1135673
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_007790a8(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + -0x18);
  if (*(int *)((int)param_1 + iVar1 + 4) != 0) {
    FUN_004ee4c8();
    FUN_004f1294(*(undefined4 *)((int)param_1 + iVar1 + 4));
          // WARNING: Could not recover jumptable at 0x007790e0. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(**(int **)((int)param_1 + iVar1 + 4) + 8))();
    return;
  }
  return;
}
