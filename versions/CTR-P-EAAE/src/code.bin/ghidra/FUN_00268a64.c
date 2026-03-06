/**
 * FUN_00268a64.c
 * Source line: 313750
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00268a64(int param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 local_18 [4];
  
  local_18[1] = param_3;
  local_18[0] = param_2;
  local_18[3] = (undefined1)((uint)param_4 >> 0x18);
  local_18[2] = (char)param_4;
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x10c)) {
    do {
      FUN_002e0248(*(int *)(param_1 + 0x108) + iVar1 * 0x518,local_18[iVar1]);
      iVar1 += 1;
    } while (iVar1 < *(int *)(param_1 + 0x10c));
  }
  return;
}
