/**
 * FUN_005e508c.c
 * Source line: 894942
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_005e508c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x60) + 0x1e4))();
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  return;
}
