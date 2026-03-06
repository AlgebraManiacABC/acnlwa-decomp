/**
 * FUN_00744b50.c
 * Source line: 1101040
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00744b50(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xc))();
  iVar2 = (**(code **)(**(int **)(param_1 + 8) + 0xc))();
  if (iVar2 <= iVar1) {
          // WARNING: Could not recover jumptable at 0x00744b94. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(**(int **)(param_1 + 4) + 0x10))();
    return;
  }
          // WARNING: Could not recover jumptable at 0x00744ba8. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(**(int **)(param_1 + 8) + 0x10))();
  return;
}
