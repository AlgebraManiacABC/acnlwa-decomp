/**
 * FUN_0073fb24.c
 * Source line: 1098198
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_0073fb24(int param_1)

{
  if (*(int **)(param_1 + 4) != NULL) {
          // WARNING: Could not recover jumptable at 0x0073fb38. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(**(int **)(param_1 + 4) + 8))();
    return;
  }
  return;
}
