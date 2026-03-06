/**
 * FUN_004ca324.c
 * Source line: 709679
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_004ca324(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      iVar1 = *(int *)(param_1 + iVar2 * 4);
      if (iVar1 != 0) {
        FUN_004668e8(iVar1,param_2);
      }
      iVar2 += 1;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  return;
}
