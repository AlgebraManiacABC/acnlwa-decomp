/**
 * FUN_00552190.c
 * Source line: 795651
 * Body lines: 12
 */
#include "../../../include/types.h"

float * FUN_00552190(undefined4 param_1,float *param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = param_3[4];
  if (((uint)fVar1 & 1) != 0) {
    param_2[6] = param_2[6] + ((param_3[1] - *param_2) - param_2[6]) * *param_3;
  }
  if (((uint)fVar1 & 2) != 0) {
    param_2[7] = param_2[7] + ((param_3[2] - param_2[1]) - param_2[7]) * *param_3;
  }
  if (((uint)fVar1 & 4) != 0) {
    param_2[8] = param_2[8] + ((param_3[3] - param_2[2]) - param_2[8]) * *param_3;
  }
  return param_3 + 5;
}
