/**
 * FUN_005d43f4.c
 * Source line: 883365
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_005d43f4(float param_1,float *param_2,float *param_3,undefined2 param_4)

{
  float fVar1;
  
  if (param_2 == NULL) {
    return;
  }
  fVar1 = (float)FUN_0047df5c(param_4);
  *param_2 = *param_3 + param_1 * fVar1;
  param_2[1] = param_3[1];
  fVar1 = (float)FUN_0047df24(param_4);
  param_2[2] = param_3[2] + param_1 * fVar1;
  return;
}
