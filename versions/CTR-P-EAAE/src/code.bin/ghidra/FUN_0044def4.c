/**
 * FUN_0044def4.c
 * Source line: 614226
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_0044def4(int *param_1)

{
  param_1[0x46] = -1;
  param_1[0x47] = 0;
  FUN_00459bb8(param_1 + 0x37);
          // WARNING: Could not recover jumptable at 0x0044df24. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x30))(param_1);
  return;
}
