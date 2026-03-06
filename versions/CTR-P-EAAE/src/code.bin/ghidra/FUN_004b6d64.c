/**
 * FUN_004b6d64.c
 * Source line: 695048
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_004b6d64(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x434) = param_2;
  iVar2 = *(int *)(param_1 + 0x268);
  iVar1 = *(int *)(param_1 + 0x434);
  FUN_0013e7d8(iVar1 + 0x10,iVar1 + 0x14,iVar2 + 4);
  *(int *)(iVar2 + 0xc) = iVar1;
  return;
}
