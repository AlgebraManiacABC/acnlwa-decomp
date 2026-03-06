/**
 * FUN_002cd3d0.c
 * Source line: 367916
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_002cd3d0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x10c) - param_2;
  if (0 < *(int *)(param_1 + 0x10c)) {
    do {
      FUN_002e0288(*(int *)(param_1 + 0x108) + iVar1 * 0x518,*(int *)(param_1 + 0x110) <= iVar1);
      *(bool *)(*(int *)(param_1 + 0x108) + iVar1 * 0x518 + 0xd9) =
           *(int *)(param_1 + 0x110) <= iVar1;
      iVar1 += 1;
    } while (iVar1 < *(int *)(param_1 + 0x10c));
  }
  return;
}
