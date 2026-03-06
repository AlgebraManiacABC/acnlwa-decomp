/**
 * FUN_00346bf4.c
 * Source line: 443609
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00346bf4(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x34))(param_1);
  iVar1 = param_1[1];
  FUN_00135748(iVar1 + 0xe8);
  *param_1 = *(int *)(iVar1 + 0xdc);
  *(int **)(iVar1 + 0xdc) = param_1;
  *(int *)(iVar1 + 0xe4) = *(int *)(iVar1 + 0xe4) + -1;
  FUN_001357ec(iVar1 + 0xe8);
  return;
}
