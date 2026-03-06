/**
 * FUN_002fbdac.c
 * Source line: 394539
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_002fbdac(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  *param_1 = iVar1;
  *(int *)((int)param_1 + *(int *)(iVar1 + -0xc)) = param_2[1];
  iVar1 = FUN_004edd3c(param_1 + 1);
  iVar1 = FUN_004ecb80(iVar1 + 0xc);
  *(undefined1 *)(iVar1 + 0x20) = 1;
  return;
}
