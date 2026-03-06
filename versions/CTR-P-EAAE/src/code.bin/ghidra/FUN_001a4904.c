/**
 * FUN_001a4904.c
 * Source line: 211714
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_001a4904(float *param_1,undefined4 param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_3[1];
  fVar2 = param_4[1];
  fVar3 = param_3[2];
  fVar4 = param_4[2];
  *param_1 = (*param_3 + *param_4) * 0.5;
  param_1[1] = (fVar1 + fVar2) * 0.5;
  param_1[2] = (fVar3 + fVar4) * 0.5;
  return;
}
