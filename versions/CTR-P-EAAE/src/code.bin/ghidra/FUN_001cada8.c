/**
 * FUN_001cada8.c
 * Source line: 232808
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_001cada8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_0070dda0(0x3f800000,param_1,param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x3c) = 9;
  }
  return;
}
