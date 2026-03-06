/**
 * FUN_00552810.c
 * Source line: 795977
 * Body lines: 10
 */
#include "../../../include/types.h"

float * FUN_00552810(undefined4 param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = param_3[2];
  fVar3 = param_3[1];
  fVar1 = param_3[3];
  *param_2 = *param_2 + (*param_3 - *param_2) * fVar1;
  param_2[1] = param_2[1] + (fVar3 - param_2[1]) * fVar1;
  param_2[2] = param_2[2] + (fVar2 - param_2[2]) * fVar1;
  return param_3 + 4;
}
