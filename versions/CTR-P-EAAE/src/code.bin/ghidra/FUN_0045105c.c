/**
 * FUN_0045105c.c
 * Source line: 616967
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0045105c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 auStack_14 [2];
  
  auStack_14[0] = *(undefined4 *)(param_1 + 0xc);
  iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x18))
                    (*(int **)(param_1 + 0x10),auStack_14,param_2,1,0);
  if (iVar1 - 0x100000U < 0x3ff00000) {
    *(undefined1 *)(*(int *)(iVar1 + 0x1c) + 0x14) = 3;
    FUN_0044e6f8(*(undefined4 *)(param_1 + 0x10));
  }
  return;
}
