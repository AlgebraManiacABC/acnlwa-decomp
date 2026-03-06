/**
 * FUN_002688cc.c
 * Source line: 313710
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_002688cc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_20 [3];
  
  local_20[0] = param_2;
  local_20[1] = param_3;
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x10c)) {
    do {
      FUN_002e0308(*(int *)(param_1 + 0x108) + iVar1 * 0x518,local_20[iVar1],param_4);
      iVar1 += 1;
    } while (iVar1 < *(int *)(param_1 + 0x10c));
  }
  return;
}
