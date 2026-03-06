/**
 * FUN_005f11f4.c
 * Source line: 903126
 * Body lines: 2
 */
#include "../../../include/types.h"

void FUN_005f11f4(int param_1)

{
          // WARNING: Could not recover jumptable at 0x005f1200. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(**(int **)(param_1 + 4) + 0x80))();
  return;
}
