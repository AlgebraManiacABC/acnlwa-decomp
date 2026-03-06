/**
 * FUN_004ca120.c
 * Source line: 709513
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_004ca120(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      iVar1 = *(int *)(param_1 + iVar2 * 4);
      if (iVar1 != 0) {
        FUN_00466898(iVar1,param_2);
      }
      iVar2 += 1;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  *(char *)(param_1 + 0x23) = (char)param_2;
  return;
}
