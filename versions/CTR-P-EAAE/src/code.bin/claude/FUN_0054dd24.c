/**
 * FUN_0054dd24.c
 * Source line: 792908
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0054dd24(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = *(int *)(*(int *)(param_1 + 8) + iVar2 * 4 + 8);
    if (iVar1 != 0) {
      FUN_0055b75c(iVar1,param_2);
    }
    iVar2 += 1;
  } while (iVar2 < 0x40);
  return;
}
