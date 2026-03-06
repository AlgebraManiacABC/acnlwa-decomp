/**
 * FUN_007e402c.c
 * Source line: 1188337
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_007e402c(int param_1)

{
  uint uVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  if ((*(int *)(param_1 + 0xc) - 0x100000U < 0x3ff00000) && (uVar1 = 0, *(int *)(param_1 + 8) != 0))
  {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + uVar1 * 4) + 0x20))();
      uVar1 += 1;
    } while (uVar1 < *(uint *)(param_1 + 8));
  }
  return;
}
