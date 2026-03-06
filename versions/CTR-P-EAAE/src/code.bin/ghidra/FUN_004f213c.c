/**
 * FUN_004f213c.c
 * Source line: 739784
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_004f213c(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  
  FUN_004f03d0(*(undefined4 *)(param_1 + 4));
  piVar2 = *(int **)(param_1 + 4);
  if (piVar2 != NULL) {
    puVar1 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
    do {
      if (puVar1 == (undefined4 *)&DAT_0097503c) goto LAB_004f2188;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != NULL);
  }
  piVar2 = NULL;
LAB_004f2188:
  FUN_004ad3f8(piVar2);
  return;
}
