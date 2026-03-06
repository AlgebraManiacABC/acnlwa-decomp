/**
 * FUN_005e5424.c
 * Source line: 895220
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_005e5424(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x60) + 0x20c))();
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  return;
}
