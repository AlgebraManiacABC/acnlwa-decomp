/**
 * FUN_00588f0c.c
 * Source line: 834007
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00588f0c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00584134();
  *(undefined1 *)(iVar1 + 0x2e) = 1;
  if (*(int **)(param_1 + 0x20) != NULL) {
          // WARNING: Could not recover jumptable at 0x00588f38. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(**(int **)(param_1 + 0x20) + 0x28))();
    return;
  }
  return;
}
