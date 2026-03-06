/**
 * FUN_005e6120.c
 * Source line: 896124
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_005e6120(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x60) + 0x2c8))();
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  return;
}
