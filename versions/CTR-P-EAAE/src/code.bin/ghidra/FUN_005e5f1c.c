/**
 * FUN_005e5f1c.c
 * Source line: 895978
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_005e5f1c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x60) + 0x248))();
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  return;
}
