/**
 * FUN_00746220.c
 * Source line: 1102347
 * Body lines: 13
 */
#include "../../../include/types.h"

bool FUN_00746220(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 8);
  if (piVar2 != NULL) {
    puVar1 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
    do {
      if (puVar1 == &DAT_00952a70) goto LAB_00746260;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != NULL);
  }
  piVar2 = NULL;
LAB_00746260:
  return 0.0 < (float)piVar2[0x1d];
}
