/**
 * FUN_001e8cd0.c
 * Source line: 250638
 * Body lines: 3
 */
#include "../../../include/types.h"

void FUN_001e8cd0(int *param_1)

{
  *(char *)((int)param_1 + 0xc9) = (char)param_1[2];
          // WARNING: Could not recover jumptable at 0x001e8cf0. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x94))(param_1);
  return;
}
