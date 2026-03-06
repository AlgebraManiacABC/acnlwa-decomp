/**
 * FUN_004bfb2c.c
 * Source line: 701839
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_004bfb2c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 4) = param_2;
  uVar1 = FUN_0073f0bc(param_2);
  *(undefined4 *)(param_1 + 0x10c) = uVar1;
  FUN_0012f154(param_1 + 0x110);
  return;
}
