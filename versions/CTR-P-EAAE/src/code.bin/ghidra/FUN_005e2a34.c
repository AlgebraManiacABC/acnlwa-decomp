/**
 * FUN_005e2a34.c
 * Source line: 893007
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_005e2a34(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005d46dc();
  if (iVar1 != 0) {
          // WARNING: Could not recover jumptable at 0x005e2a58. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(**(int **)(param_1 + 0x60) + 0x154))();
    return;
  }
          // WARNING: Could not recover jumptable at 0x005e2a64. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(**(int **)(param_1 + 0x60) + 0x158))();
  return;
}
