/**
 * FUN_003483f0.c
 * Source line: 444989
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_003483f0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 0x34))(param_1);
  iVar1 = iRam00974f04;
  iVar2 = iRam00974f04 + 0x30;
  FUN_00135748(iVar2);
  *param_1 = *(int *)(iVar1 + 0x24);
  *(int **)(iVar1 + 0x24) = param_1;
  *(int *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x2c) + -1;
  FUN_001357ec(iVar2);
  return;
}
