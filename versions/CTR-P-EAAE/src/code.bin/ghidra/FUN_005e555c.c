/**
 * FUN_005e555c.c
 * Source line: 895320
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_005e555c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x60) + 0x274))();
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  return;
}
