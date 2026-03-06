/**
 * FUN_005d8e1c.c
 * Source line: 886520
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_005d8e1c(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_005ea21c(param_1 + 0x68,param_1 + 0x6c,param_2);
  uVar1 &= (int)*(char *)(param_1 + 0x70);
  *(char *)(param_1 + 0x70) = (char)uVar1;
  if (uVar1 == 0) {
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  return;
}
