/**
 * FUN_005e50d0.c
 * Source line: 894966
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_005e50d0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x60) + 0x22c))();
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  return;
}
