/**
 * FUN_0030710c.c
 * Source line: 405108
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_0030710c(float *param_1,int param_2,int param_3,int param_4,int param_5)

{
  *param_1 = (float)(longlong)((param_4 + param_2 * 0x10) * 0x20 + 0x10);
  param_1[1] = 0.0;
  param_1[2] = (float)(longlong)((param_5 + param_3 * 0x10) * 0x20 + 0x10);
  return;
}
