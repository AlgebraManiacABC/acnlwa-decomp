/**
 * FUN_00495534.c
 * Source line: 668855
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00495534(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  FUN_0049bab0(param_1 + 0x40);
  *(undefined1 *)(param_1 + 0x12) = 1;
  iVar1 = *(int *)(param_1 + 8);
  *(undefined1 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  FUN_004992e4();
  FUN_00495728(param_1 + 0x100,0x1fff);
  return;
}
