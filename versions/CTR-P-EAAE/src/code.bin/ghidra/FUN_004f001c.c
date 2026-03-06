/**
 * FUN_004f001c.c
 * Source line: 737806
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_004f001c(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    piVar1 = *(int **)(param_1 + iVar2 * 4 + 0x10);
    if (piVar1 != NULL) {
      (**(code **)(*piVar1 + 0x20))();
    }
    iVar2 += 1;
  } while (iVar2 < 4);
  return;
}
