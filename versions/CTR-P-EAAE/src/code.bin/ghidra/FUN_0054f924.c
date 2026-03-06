/**
 * FUN_0054f924.c
 * Source line: 794107
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0054f924(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x87c);
  iVar2 = param_2 + param_4 * 0xc;
  *(undefined4 *)(iVar1 + 0x5f448) = 0;
  *(undefined4 *)(iVar1 + 0x5f450) = 0;
  *(int *)(iVar1 + 0x5f458) = param_2;
  *(int *)(iVar1 + 0x5f45c) = iVar2;
  *(int *)(iVar1 + 0x5f460) = iVar2 + param_4 * 0xc;
  *(int *)(iVar1 + 0x5f44c) = param_4;
  *(undefined4 *)(iVar1 + 0x5f454) = param_3;
  *(undefined1 *)(iVar1 + 0x5fbfc) = 0;
  return;
}
