/**
 * FUN_003d31a4.c
 * Source line: 544677
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_003d31a4(int param_1,uint param_2)

{
  uint local_18;
  int local_14;
  
  FUN_0035b994(&local_18);
  if ((int)param_2 < 0) {
    local_14 -= ((int)-param_2 >> 0x1f) + (uint)(local_18 < -param_2);
  }
  else {
    local_14 = local_14 + ((int)param_2 >> 0x1f) + (uint)CARRY4(local_18,param_2);
  }
  *(uint *)(param_1 + 0x10) = local_18 + param_2;
  *(int *)(param_1 + 0x14) = local_14;
  *(uint *)(param_1 + 0x18) = param_2;
  *(int *)(param_1 + 0x1c) = (int)param_2 >> 0x1f;
  return;
}
