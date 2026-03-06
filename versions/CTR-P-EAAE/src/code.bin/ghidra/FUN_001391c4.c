/**
 * FUN_001391c4.c
 * Source line: 145694
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_001391c4(undefined4 param_1,int *param_2,undefined4 param_3)

{
  if (DAT_00975338 == 0) {
    FUN_002f75a0(param_1,0,param_3,0);
    return;
  }
  if ((param_2 == NULL) && (param_2 = (int *)FUN_003045a8(DAT_00975338), param_2 == NULL)) {
    return;
  }
          // WARNING: Could not recover jumptable at 0x001312f0. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*param_2 + 0x18))(param_2,param_1,param_3);
  return;
}
