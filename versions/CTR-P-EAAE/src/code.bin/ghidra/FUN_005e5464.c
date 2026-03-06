/**
 * FUN_005e5464.c
 * Source line: 895244
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_005e5464(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x60) + 0x1f0))();
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  return;
}
