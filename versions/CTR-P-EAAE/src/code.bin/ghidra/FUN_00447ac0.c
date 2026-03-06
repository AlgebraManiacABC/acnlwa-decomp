/**
 * FUN_00447ac0.c
 * Source line: 609683
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00447ac0(int param_1)

{
  if (*(int **)(param_1 + 0x84) + -0x40000 < (int *)0x3ff00000) {
          // WARNING: Could not recover jumptable at 0x00447adc. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(**(int **)(param_1 + 0x84) + 0x10))();
    return;
  }
  return;
}
