/**
 * FUN_004d5a18.c
 * Source line: 718267
 * Body lines: 7
 */
#include "../../../include/types.h"

float FUN_004d5a18(float param_1,float param_2,float param_3)

{
  float fVar1;
  
  fVar1 = (float)FUN_0077a650((param_1 - param_2) / (param_3 - param_2));
  param_1 = param_1 - (float)(longlong)(int)fVar1 * (param_3 - param_2);
  if (((int)fVar1 & 1U) != 0) {
    param_1 = (param_2 + param_3) - param_1;
  }
  return param_1;
}
