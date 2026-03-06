/**
 * FUN_0071900c.c
 * Source line: 1071973
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_0071900c(int param_1)

{
  if (*(int **)(param_1 + 0x118) != NULL) {
          // WARNING: Could not recover jumptable at 0x00719024. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(**(int **)(param_1 + 0x118) + 0x10))();
    return;
  }
  return;
}
