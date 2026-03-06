/**
 * FUN_005e5c88.c
 * Source line: 895784
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_005e5c88(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x60) + 0x2d0))();
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  return;
}
