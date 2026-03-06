/**
 * FUN_0052eff8.c
 * Source line: 773422
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0052eff8(float *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2[1];
  iVar1 = param_3[1];
  *param_1 = (float)(longlong)((*param_3 + *param_2 * 0x10) * 0x20 + 0x10);
  param_1[1] = 0.0;
  param_1[2] = (float)(longlong)((iVar1 + iVar2 * 0x10) * 0x20 + 0x10);
  return;
}
