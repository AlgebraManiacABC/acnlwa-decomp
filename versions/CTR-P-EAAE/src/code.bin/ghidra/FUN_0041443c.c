/**
 * FUN_0041443c.c
 * Source line: 580287
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_0041443c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  nnnstdMemCpy((uint)*(ushort *)((int)param_1 + 0xe) + (uint)*(ushort *)(param_1 + 4) + param_1[1],
               param_2,param_3);
  *(short *)(param_1 + 4) = (short)param_1[4] + (short)param_3;
          // WARNING: Could not recover jumptable at 0x00414480. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 8))(param_1);
  return;
}
