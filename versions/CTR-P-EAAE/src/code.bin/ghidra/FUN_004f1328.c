/**
 * FUN_004f1328.c
 * Source line: 738880
 * Body lines: 13
 */
#include "../../../include/types.h"

int * FUN_004f1328(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 4);
  if (piVar2 != NULL) {
    piVar1 = (int *)(**(code **)(*piVar2 + 8))(piVar2);
    do {
      if (piVar1 == (int *)0x9750bc) {
        return piVar2;
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != NULL);
  }
  return NULL;
}
