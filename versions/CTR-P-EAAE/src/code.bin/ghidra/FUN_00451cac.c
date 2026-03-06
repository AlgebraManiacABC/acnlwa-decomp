/**
 * FUN_00451cac.c
 * Source line: 617397
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00451cac(int param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 auStack_14 [2];
  
  auStack_14[0] = *(undefined4 *)(param_1 + 0xc);
  iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x18))
                    (*(int **)(param_1 + 0x10),auStack_14,param_2,4,0);
  if (iVar1 - 0x100000U < 0x3ff00000) {
    *(undefined1 *)(*(int *)(iVar1 + 0x1c) + 0x14) = 2;
    *(undefined1 *)(*(int *)(iVar1 + 0x1c) + 0x15) = param_3;
    *(undefined1 *)(*(int *)(iVar1 + 0x1c) + 0x16) = 5;
    *(undefined1 *)(*(int *)(iVar1 + 0x1c) + 0x17) = 0;
    FUN_0044e6f8(*(undefined4 *)(param_1 + 0x10));
  }
  return;
}
