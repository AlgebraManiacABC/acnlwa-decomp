/**
 * FUN_004f0de0.c
 * Source line: 738468
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_004f0de0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x28);
  if (iVar1 != 0) {
    FUN_0048b4dc(iVar1,0);
    FUN_0048b4dc(*(undefined4 *)(*(int *)(param_1 + 4) + 0x28),1);
    return;
  }
  return;
}
