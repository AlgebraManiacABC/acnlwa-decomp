/**
 * FUN_005e5ac8.c
 * Source line: 895648
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_005e5ac8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x60) + 0x2a8))(*(int **)(param_1 + 0x60),0xc);
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  return;
}
