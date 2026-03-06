/**
 * FUN_00268878.c
 * Source line: 313688
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00268878(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_10 [3];
  
  local_10[0] = param_2;
  local_10[1] = param_3;
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x10c)) {
    do {
      iVar2 = iVar1 + 1;
      *(undefined4 *)(*(int *)(param_1 + 0x108) + iVar1 * 0x518 + 0xc4) = local_10[iVar1];
      iVar1 = iVar2;
    } while (iVar2 < *(int *)(param_1 + 0x10c));
  }
  return;
}
