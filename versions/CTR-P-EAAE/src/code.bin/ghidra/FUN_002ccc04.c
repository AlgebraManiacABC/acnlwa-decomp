/**
 * FUN_002ccc04.c
 * Source line: 367438
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_002ccc04(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x10c)) {
    do {
      FUN_002e0288(*(int *)(param_1 + 0x108) + iVar1 * 0x518,param_2);
      iVar2 = iVar1 + 1;
      *(char *)(*(int *)(param_1 + 0x108) + iVar1 * 0x518 + 0xd9) = (char)param_2;
      iVar1 = iVar2;
    } while (iVar2 < *(int *)(param_1 + 0x10c));
  }
  return;
}
