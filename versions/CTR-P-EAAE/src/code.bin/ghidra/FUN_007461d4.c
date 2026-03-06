/**
 * FUN_007461d4.c
 * Source line: 1102326
 * Body lines: 13
 */
#include "../../../include/types.h"

int * FUN_007461d4(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 8);
  if (piVar2 != NULL) {
    puVar1 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
    do {
      if (puVar1 == &DAT_00952a70) {
        return piVar2;
      }
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != NULL);
  }
  return NULL;
}
