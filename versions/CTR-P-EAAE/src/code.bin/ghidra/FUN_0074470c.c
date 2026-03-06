/**
 * FUN_0074470c.c
 * Source line: 1100840
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0074470c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 8))();
  iVar2 = (**(code **)(**(int **)(param_1 + 8) + 8))();
  if (iVar2 <= iVar1) {
          // WARNING: Could not recover jumptable at 0x00744750. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(**(int **)(param_1 + 4) + 0x54))();
    return;
  }
          // WARNING: Could not recover jumptable at 0x00744764. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(**(int **)(param_1 + 8) + 0x54))();
  return;
}
