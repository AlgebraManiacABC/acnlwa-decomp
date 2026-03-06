/**
 * FUN_005e51e8.c
 * Source line: 895050
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_005e51e8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x60) + 0x21c))();
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  return;
}
