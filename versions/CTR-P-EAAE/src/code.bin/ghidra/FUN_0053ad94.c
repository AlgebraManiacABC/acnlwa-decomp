/**
 * FUN_0053ad94.c
 * Source line: 780610
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0053ad94(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*(uint *)(param_1 + 0x6c) & 1) != 0) {
    FUN_00538188();
    iVar1 = param_1 + 0x50;
  }
  FUN_0053d284(*(int *)(param_1 + 0x48) + param_2);
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + -1;
  if (iVar1 == 0) {
    return;
  }
  FUN_00538274(iVar1);
  return;
}
