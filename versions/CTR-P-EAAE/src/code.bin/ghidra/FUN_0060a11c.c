/**
 * FUN_0060a11c.c
 * Source line: 923019
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0060a11c(int param_1)

{
  int iVar1;
  
  FUN_005cd270(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined **)(param_1 + 0x50) = &UNK_005cf864;
  *(undefined4 *)(param_1 + 0x30) = 0x10000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar1 = FUN_00304640(param_1 + 0x28);
  if (iVar1 != 0) {
    FUN_0081c0a0(param_1);
  }
  return;
}
