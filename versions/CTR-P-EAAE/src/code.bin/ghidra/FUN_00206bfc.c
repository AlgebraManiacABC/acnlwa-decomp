/**
 * FUN_00206bfc.c
 * Source line: 265225
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00206bfc(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  *param_1 = iVar1;
  *(int *)((int)param_1 + *(int *)(iVar1 + -0xc)) = param_2[1];
  param_1[1] = 0;
  iVar1 = FUN_004edd3c(param_1 + 2);
  iVar1 = FUN_004ecf18(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0x18) = 0x16;
  return;
}
