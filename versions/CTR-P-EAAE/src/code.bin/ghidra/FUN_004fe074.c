/**
 * FUN_004fe074.c
 * Source line: 745071
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_004fe074(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    piVar1 = *(int **)(param_1 + iVar2 * 4 + 4);
    if (piVar1 != NULL) {
      (**(code **)(*piVar1 + 8))();
    }
    iVar2 += 1;
  } while (iVar2 < 0x40);
  return;
}
