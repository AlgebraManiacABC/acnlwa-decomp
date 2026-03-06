/**
 * FUN_0029b6c8.c
 * Source line: 340325
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_0029b6c8(undefined4 param_1,int param_2)

{
  if (*(int **)(param_2 + 0xb4) != NULL) {
          // WARNING: Could not recover jumptable at 0x0029b6e0. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(**(int **)(param_2 + 0xb4) + 0x70))(param_1);
    return;
  }
  return;
}
