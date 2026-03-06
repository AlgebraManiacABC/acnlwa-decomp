/**
 * FUN_004b350c.c
 * Source line: 692215
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_004b350c(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if ((iVar3 != 0) && (iVar2 = 0, 0 < *(int *)(iVar3 + 0x20) - *(int *)(iVar3 + 0x1c) >> 2)) {
    do {
      piVar1 = *(int **)(*(int *)(iVar3 + 0x1c) + iVar2 * 4);
      if (piVar1 != NULL) {
        (**(code **)(*piVar1 + 0x14))();
      }
      iVar2 += 1;
    } while (iVar2 < *(int *)(iVar3 + 0x20) - *(int *)(iVar3 + 0x1c) >> 2);
  }
  return;
}
