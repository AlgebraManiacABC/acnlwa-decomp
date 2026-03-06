/**
 * FUN_0056a274.c
 * Source line: 811663
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0056a274(float *param_1,undefined2 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)FUN_0047df24(param_2);
  fVar2 = (float)FUN_0047df5c(param_2);
  fVar3 = *param_1;
  *param_1 = fVar1 * fVar3 - fVar2 * param_1[1];
  param_1[1] = fVar2 * fVar3 + fVar1 * param_1[1];
  return;
}
