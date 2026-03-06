/**
 * FUN_00459d0c.c
 * Source line: 623246
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00459d0c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,undefined1 param_6)

{
  int iVar1;
  
  iVar1 = param_1 + *(int *)(param_1 + 200) * 0x10;
  *(undefined4 *)(iVar1 + 0x18) = param_2;
  *(undefined4 *)(iVar1 + 0x1c) = param_3;
  *(undefined4 *)(iVar1 + 0x20) = param_4;
  *(undefined1 *)(iVar1 + 0x24) = param_5;
  *(undefined1 *)(iVar1 + 0x25) = param_6;
  *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
  return;
}
