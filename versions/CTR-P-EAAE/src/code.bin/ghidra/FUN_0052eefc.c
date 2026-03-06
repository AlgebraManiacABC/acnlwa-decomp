/**
 * FUN_0052eefc.c
 * Source line: 773380
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_0052eefc(float *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_2[1];
  *param_1 = (float)(longlong)(*param_2 * 0x20);
  param_1[1] = 0.0;
  param_1[2] = (float)(longlong)(iVar1 * 0x20);
  return;
}
