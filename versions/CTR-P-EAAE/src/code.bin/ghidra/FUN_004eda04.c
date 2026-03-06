/**
 * FUN_004eda04.c
 * Source line: 734885
 * Body lines: 13
 */
#include "../../../include/types.h"

int FUN_004eda04(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 4);
  if (piVar2 != NULL) {
    piVar1 = (int *)(**(code **)(*piVar2 + 8))(piVar2);
    do {
      if (piVar1 == (int *)0x9750d0) goto LAB_004eda44;
      piVar1 = (int *)*piVar1;
    } while (piVar1 != NULL);
  }
  piVar2 = NULL;
LAB_004eda44:
  return piVar2[0x8a];
}
