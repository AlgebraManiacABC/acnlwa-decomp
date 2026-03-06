/**
 * FUN_005e5b9c.c
 * Source line: 895712
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_005e5b9c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x60) + 0x278))();
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  return;
}
