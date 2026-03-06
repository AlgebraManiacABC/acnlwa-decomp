/**
 * FUN_00584e0c.c
 * Source line: 831245
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00584e0c(int param_1)

{
  if (*(char *)(param_1 + 0xc) == '+') {
          // WARNING: Could not recover jumptable at 0x00584e24. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(**(int **)(param_1 + 8) + 4))();
    return;
  }
  return;
}
