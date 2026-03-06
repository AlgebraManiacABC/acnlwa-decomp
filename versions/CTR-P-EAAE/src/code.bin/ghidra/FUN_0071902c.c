/**
 * FUN_0071902c.c
 * Source line: 1071987
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_0071902c(int param_1)

{
  if (*(int **)(param_1 + 0x118) != NULL) {
          // WARNING: Could not recover jumptable at 0x00719044. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(**(int **)(param_1 + 0x118) + 0x14))();
    return;
  }
  return;
}
