/**
 * FUN_0046682c.c
 * Source line: 632694
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_0046682c(int param_1)

{
  int iVar1;
  
  FUN_00135748();
  iVar1 = *(int *)(param_1 + 0x30);
  while (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x11) = 3;
    iVar1 = *(int *)(iVar1 + 0x14);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined2 *)(param_1 + 0x34) = 0;
  *(undefined2 *)(param_1 + 0x36) = 0;
  FUN_001357ec(param_1 + 0x70);
  *(ushort *)(param_1 + 0x6c) = *(ushort *)(param_1 + 0x6c) | 0x8000;
  *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
  return;
}
