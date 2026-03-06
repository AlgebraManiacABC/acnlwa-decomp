/**
 * FUN_005e5250.c
 * Source line: 895082
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_005e5250(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x60) + 0x218))();
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  return;
}
