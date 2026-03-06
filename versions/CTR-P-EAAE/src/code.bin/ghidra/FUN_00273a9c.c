/**
 * FUN_00273a9c.c
 * Source line: 320143
 * Body lines: 2
 */
#include "../../../include/types.h"

void FUN_00273a9c(int param_1,int param_2)

{
          // WARNING: Could not recover jumptable at 0x00273abc. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*(int *)(param_1 + (param_2 - *(int *)(param_1 + 0x2be8)) * 0x2b4 + 4000) + 0x60))();
  return;
}
