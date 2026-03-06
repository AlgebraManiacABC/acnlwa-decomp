/**
 * FUN_005f1234.c
 * Source line: 903170
 * Body lines: 2
 */
#include "../../../include/types.h"

void FUN_005f1234(int param_1)

{
          // WARNING: Could not recover jumptable at 0x005f1240. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(**(int **)(param_1 + 4) + 0x24))();
  return;
}
