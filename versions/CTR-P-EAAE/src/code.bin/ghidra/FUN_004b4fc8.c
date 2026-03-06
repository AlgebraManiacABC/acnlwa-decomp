/**
 * FUN_004b4fc8.c
 * Source line: 693705
 * Body lines: 13
 */
#include "../../../include/types.h"

int * FUN_004b4fc8(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 4);
  if (piVar2 != (int *)(param_1 + 4)) {
    do {
      iVar1 = FUN_004be798(piVar2 + 5,param_2);
      if (iVar1 != 0) {
        return piVar2 + -1;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)(param_1 + 4));
  }
  return NULL;
}
