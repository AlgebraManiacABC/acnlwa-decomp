/**
 * FUN_002d11dc.c
 * Source line: 370135
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_002d11dc(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2[1];
  *param_1 = iVar1;
  *(int *)((int)param_1 + *(int *)(iVar1 + -0xc)) = param_2[2];
  iVar1 = FUN_004edd3c(param_1 + 1);
  iVar1 = FUN_004ecf18(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0x18) = 0x16;
  *(undefined1 *)(iVar1 + 0x1c) = 1;
  *(undefined1 *)(iVar1 + 0x1d) = 1;
  iVar2 = *param_2;
  *(int *)(iVar1 + -0x10) = iVar2;
  *(int *)(iVar1 + -0x10 + *(int *)(iVar2 + -0xc)) = param_2[3];
  iVar1 = FUN_004ee868(iVar1 + 0x20);
  return iVar1 + -0x30;
}
