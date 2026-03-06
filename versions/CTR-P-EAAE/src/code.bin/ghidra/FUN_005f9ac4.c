/**
 * FUN_005f9ac4.c
 * Source line: 910135
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_005f9ac4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x90);
  FUN_005ea1d0(*(undefined4 *)(iVar1 + 0x20),iVar1 + 0x28,param_2);
  **(undefined1 **)(iVar1 + 0x24) = 1;
  *(undefined2 *)(param_1 + 0xce) = **(undefined2 **)(param_2 + 0x10);
  return;
}
