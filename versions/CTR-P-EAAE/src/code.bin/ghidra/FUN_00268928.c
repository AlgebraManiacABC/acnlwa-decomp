/**
 * FUN_00268928.c
 * Source line: 313730
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00268928(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_18 [2];
  
  local_18[0] = param_2;
  local_18[1] = param_3;
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x10c)) {
    do {
      FUN_002e037c(*(int *)(param_1 + 0x108) + iVar1 * 0x518,local_18[iVar1]);
      iVar1 += 1;
    } while (iVar1 < *(int *)(param_1 + 0x10c));
  }
  return;
}
