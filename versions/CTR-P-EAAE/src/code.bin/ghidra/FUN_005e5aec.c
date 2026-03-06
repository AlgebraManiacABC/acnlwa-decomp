/**
 * FUN_005e5aec.c
 * Source line: 895660
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_005e5aec(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x60) + 0x26c))();
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  return;
}
