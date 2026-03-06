/**
 * FUN_002687c8.c
 * Source line: 313641
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_002687c8(int param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 local_18 [2];
  undefined2 uStack_16;
  
  uStack_16 = (undefined2)((uint)param_4 >> 0x10);
  local_18 = (undefined1  [2])CONCAT11(param_3,param_2);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x10c)) {
    do {
      FUN_002e0248(*(int *)(param_1 + 0x108) + iVar1 * 0x518,local_18[iVar1]);
      iVar1 += 1;
    } while (iVar1 < *(int *)(param_1 + 0x10c));
  }
  return;
}
