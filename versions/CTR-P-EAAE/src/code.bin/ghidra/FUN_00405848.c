/**
 * FUN_00405848.c
 * Source line: 572934
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00405848(int param_1)

{
  if (*(int **)(param_1 + 0x6c) + -0x40000 < (int *)0x3ff00000) {
          // WARNING: Could not recover jumptable at 0x00405864. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(**(int **)(param_1 + 0x6c) + 0xc))();
    return;
  }
  return;
}
