/**
 * FUN_0048be68.c
 * Source line: 661891
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0048be68(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x14) + iVar2 * 4);
      if (piVar1 != NULL) {
        (**(code **)(*piVar1 + 0x14))();
      }
      iVar2 += 1;
    } while (iVar2 < *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2);
  }
  return;
}
