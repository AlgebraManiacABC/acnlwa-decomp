/**
 * FUN_004c5f98.c
 * Source line: 706281
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_004c5f98(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(undefined2 *)(param_1 + 0x328c) = *(undefined2 *)(param_2 + 8);
  iVar1 = FUN_00140f54();
  iVar2 = FUN_004c885c(iVar1,0x19);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0x184);
  *(undefined1 *)(iVar2 + 4) = 0x27;
  *(int *)(iVar2 + 0x10) = param_1 + 0x118;
  __rt_memcpy_w(iVar2 + 0x14,param_2,0x50);
  FUN_004c8b24(iVar1,iVar2);
  return;
}
