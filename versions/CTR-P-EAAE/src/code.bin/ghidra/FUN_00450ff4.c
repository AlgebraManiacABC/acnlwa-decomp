/**
 * FUN_00450ff4.c
 * Source line: 616949
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00450ff4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uStack_14;
  
  uStack_14 = *(undefined4 *)(param_1 + 0xc);
  iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x10))
                    (*(int **)(param_1 + 0x10),&uStack_14,param_2,1,param_3);
  if (iVar1 - 0x100000U < 0x3ff00000) {
    *(undefined1 *)(*(int *)(iVar1 + 0x1c) + 0x14) = 3;
    FUN_0044e6f8(*(undefined4 *)(param_1 + 0x10));
  }
  return;
}
