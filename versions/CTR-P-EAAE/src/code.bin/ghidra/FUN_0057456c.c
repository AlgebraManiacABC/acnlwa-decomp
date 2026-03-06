/**
 * FUN_0057456c.c
 * Source line: 818866
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_0057456c(int param_1)

{
  if (*(int **)(param_1 + 0x300) != NULL) {
          // WARNING: Could not recover jumptable at 0x00574580. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(**(int **)(param_1 + 0x300) + 0x1c))();
    return;
  }
  return;
}
