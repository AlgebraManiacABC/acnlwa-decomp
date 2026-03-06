/**
 * FUN_00759ab0.c
 * Source line: 1114794
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00759ab0(float *param_1,short *param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  short sVar2;
  float fVar3;
  
  sVar1 = param_2[1];
  sVar2 = *param_2;
  *param_1 = (float)(longlong)(int)sVar2 * 0.25;
  param_1[1] = 0.0;
  param_1[2] = (float)(longlong)(int)sVar1 * 0.25;
  fVar3 = (float)FUN_006c7868(param_1,0,(int)sVar1,param_4,sVar2);
  param_1[1] = fVar3;
  return;
}
