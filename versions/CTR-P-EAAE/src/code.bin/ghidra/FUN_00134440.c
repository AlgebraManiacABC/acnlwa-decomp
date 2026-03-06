/**
 * FUN_00134440.c
 * Source line: 140225
 * Body lines: 7
 */
#include "../../../include/types.h"

float FUN_00134440(float *param_1)

{
  float fVar1;
  
  fVar1 = param_1[1];
  if ((int)param_1[3] < (int)param_1[2]) {
    fVar1 = ((fVar1 - *param_1) * (float)(longlong)(int)param_1[3]) /
            (float)(longlong)(int)param_1[2] + *param_1;
  }
  return fVar1;
}
