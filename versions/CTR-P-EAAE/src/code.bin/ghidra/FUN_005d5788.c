/**
 * FUN_005d5788.c
 * Source line: 884265
 * Body lines: 12
 */
#include "../../../include/types.h"

int FUN_005d5788(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  (**(code **)(*param_2 + 0x1c))(param_2);
  uVar1 = (**(code **)(*param_2 + 8))(param_2);
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  iVar2 = (**(code **)(*param_2 + 0x10))(param_2);
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + iVar2 * 2 + -2;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  FUN_006019b0(param_1,param_1 + 0x60,0x95df14);
  FUN_0060184c(param_1,0x95df14);
  return (int)*(char *)(param_1 + 0x6c);
}
