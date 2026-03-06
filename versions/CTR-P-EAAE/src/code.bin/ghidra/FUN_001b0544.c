/**
 * FUN_001b0544.c
 * Source line: 218278
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_001b0544(float param_1,int param_2,int param_3)

{
  if (param_3 < 0) {
    param_3 = 0;
  }
  *(float *)(param_2 + 8) = param_1;
  if (param_3 != 0) {
    *(int *)(param_2 + 0x10) = param_3;
    *(float *)(param_2 + 0xc) = (param_1 - *(float *)(param_2 + 4)) / (float)(longlong)param_3;
    return;
  }
  *(float *)(param_2 + 4) = param_1;
  *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
  return;
}
