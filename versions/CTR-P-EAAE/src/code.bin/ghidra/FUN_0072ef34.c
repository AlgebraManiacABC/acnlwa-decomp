/**
 * FUN_0072ef34.c
 * Source line: 1086184
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_0072ef34(int param_1,int param_2)

{
  if (param_2 - 0x100000U < 0x3ff00000) {
          // WARNING: Could not recover jumptable at 0x0072ef54. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(**(int **)(param_1 + 0x14) + 0x58))();
    return;
  }
  return;
}
