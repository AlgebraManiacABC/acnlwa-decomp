/**
 * FUN_007407a0.c
 * Source line: 1098939
 * Body lines: 7
 */
#include "../../../include/types.h"

float FUN_007407a0(int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0xc)) {
    fVar1 = ((fVar1 - *(float *)(param_1 + 4)) * (float)(longlong)*(int *)(param_1 + 0x10)) /
            (float)(longlong)*(int *)(param_1 + 0xc) + *(float *)(param_1 + 4);
  }
  return fVar1;
}
