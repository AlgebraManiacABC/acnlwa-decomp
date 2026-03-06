/**
 * FUN_00552214.c
 * Source line: 795671
 * Body lines: 8
 */
#include "../../../include/types.h"

float * FUN_00552214(undefined4 param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar2 = param_3[1];
  fVar1 = param_3[2];
  *param_2 = *param_2 + *param_3;
  param_2[1] = param_2[1] + fVar2;
  param_2[2] = param_2[2] + fVar1;
  return param_3 + 3;
}
