/**
 * FUN_004d59e4.c
 * Source line: 718256
 * Body lines: 3
 */
#include "../../../include/types.h"

float FUN_004d59e4(float param_1,float param_2,float param_3)

{
  float fVar1;
  
  fVar1 = (float)FUN_0077a650((param_1 - param_2) / (param_3 - param_2));
  return param_1 - (float)(longlong)(int)fVar1 * (param_3 - param_2);
}
