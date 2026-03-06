/**
 * FUN_005e6204.c
 * Source line: 896188
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_005e6204(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x60) + 0x2ec))();
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  return;
}
