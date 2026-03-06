/**
 * FUN_0052ef8c.c
 * Source line: 773408
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_0052ef8c(float *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_2[1];
  *param_1 = (float)(longlong)(*param_2 * 0x20 + 0x10);
  param_1[1] = 0.0;
  param_1[2] = (float)(longlong)(iVar1 * 0x20 + 0x10);
  return;
}
