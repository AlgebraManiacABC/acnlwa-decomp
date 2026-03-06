/**
 * FUN_005e53f8.c
 * Source line: 895206
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_005e53f8(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 8) == 2) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x60) + 0x2b0))();
    *(undefined4 *)(param_1 + 0x70) = uVar1;
  }
  return;
}
