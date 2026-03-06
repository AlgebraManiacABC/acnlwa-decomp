/**
 * FUN_004cc4c0.c
 * Source line: 711498
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_004cc4c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar1 = FUN_004d43f8(param_1,param_2,param_3,0x1b8);
    *(undefined4 *)(param_1 + 0x14) = uVar1;
    *(undefined4 *)(param_1 + 0x18) = param_2;
    *(undefined1 *)(param_1 + 0x10) = 1;
    *(undefined4 *)(param_1 + 0x1c) = param_3;
  }
  return;
}
