/**
 * FUN_005e6014.c
 * Source line: 896056
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_005e6014(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x60) + 0x270))();
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  return;
}
