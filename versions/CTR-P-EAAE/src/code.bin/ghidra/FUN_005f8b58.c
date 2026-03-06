/**
 * FUN_005f8b58.c
 * Source line: 909147
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_005f8b58(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x8c) + 0x364);
  if (piVar1 != NULL) {
    iVar2 = (**(code **)(*piVar1 + 0xd0))();
    if (iVar2 < 0) {
      iVar2 = -1;
    }
    FUN_0060351c(*(undefined4 *)(param_1 + 0x8c),iVar2,0,0,3);
    if (*(char *)(param_1 + 0xcd) == '\0') {
      *(undefined1 *)(*(int *)(param_1 + 0x8c) + 0x1c) = 1;
    }
  }
  return;
}
