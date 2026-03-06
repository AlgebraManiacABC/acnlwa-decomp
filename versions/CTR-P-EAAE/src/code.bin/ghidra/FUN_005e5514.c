/**
 * FUN_005e5514.c
 * Source line: 895296
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_005e5514(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x60) + 0x2a8))(*(int **)(param_1 + 0x60),0x13);
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  return;
}
