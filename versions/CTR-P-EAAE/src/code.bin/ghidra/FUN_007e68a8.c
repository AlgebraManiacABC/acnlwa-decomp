/**
 * FUN_007e68a8.c
 * Source line: 1190012
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_007e68a8(float param_1,float *param_2,float param_3)

{
  float fVar1;
  
  fVar1 = param_2[1];
  if ((int)param_2[3] < (int)param_2[2]) {
    fVar1 = ((fVar1 - *param_2) * (float)(longlong)(int)param_2[3]) /
            (float)(longlong)(int)param_2[2] + *param_2;
  }
  *param_2 = fVar1;
  param_2[1] = param_1;
  param_2[2] = param_3;
  param_2[3] = 0.0;
  return;
}
