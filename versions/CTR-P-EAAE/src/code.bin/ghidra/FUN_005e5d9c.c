/**
 * FUN_005e5d9c.c
 * Source line: 895868
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_005e5d9c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x60) + 0x2d4))();
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  return;
}
