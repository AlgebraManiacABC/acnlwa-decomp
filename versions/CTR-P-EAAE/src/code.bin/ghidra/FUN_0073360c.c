/**
 * FUN_0073360c.c
 * Source line: 1089018
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_0073360c(int param_1)

{
  if (*(int **)(param_1 + 0x84) + -0x40000 < (int *)0x3ff00000) {
          // WARNING: Could not recover jumptable at 0x0073362c. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(**(int **)(param_1 + 0x84) + 0xc))();
    return;
  }
  return;
}
