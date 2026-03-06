/**
 * FUN_0052ef44.c
 * Source line: 773394
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_0052ef44(float *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_2[1];
  *param_1 = (float)(longlong)(*param_2 * 0x200);
  param_1[1] = 0.0;
  param_1[2] = (float)(longlong)(iVar1 * 0x200);
  return;
}
