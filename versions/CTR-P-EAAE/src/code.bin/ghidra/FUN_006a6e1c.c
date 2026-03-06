/**
 * FUN_006a6e1c.c
 * Source line: 1003936
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_006a6e1c(float *param_1,int param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  
  *param_1 = (float)(longlong)((param_4 + param_2 * 0x10) * 0x20 + 0x10);
  param_1[1] = 0.0;
  param_1[2] = (float)(longlong)((param_5 + param_3 * 0x10) * 0x20 + 0x10);
  fVar1 = (float)FUN_006c60b8();
  param_1[1] = fVar1;
  return;
}
