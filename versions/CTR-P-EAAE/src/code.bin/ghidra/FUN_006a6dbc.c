/**
 * FUN_006a6dbc.c
 * Source line: 1003921
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_006a6dbc(float *param_1,int param_2,int param_3)

{
  float fVar1;
  
  *param_1 = (float)(longlong)(param_2 * 0x20 + 0x10);
  param_1[1] = 0.0;
  param_1[2] = (float)(longlong)(param_3 * 0x20 + 0x10);
  fVar1 = (float)FUN_006c602c(param_2,param_3,0);
  param_1[1] = fVar1;
  return;
}
