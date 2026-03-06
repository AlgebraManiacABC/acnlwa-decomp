/**
 * FUN_002fd0c4.c
 * Source line: 395567
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_002fd0c4(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  *param_1 = iVar1;
  *(int *)((int)param_1 + *(int *)(iVar1 + -0xc)) = param_2[1];
  iVar1 = FUN_004edd3c(param_1 + 1);
  iVar1 = FUN_004ecf18(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0x18) = 0x16;
  *(undefined1 *)(iVar1 + 0x1c) = 1;
  *(undefined1 *)(iVar1 + 0x1d) = 1;
  return;
}
