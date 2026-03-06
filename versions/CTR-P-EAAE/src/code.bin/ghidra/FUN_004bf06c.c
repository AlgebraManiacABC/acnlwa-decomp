/**
 * FUN_004bf06c.c
 * Source line: 701207
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_004bf06c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)(param_1 + 4)) {
    do {
      piVar2 = (int *)*piVar1;
      FUN_004c491c(piVar1 + -0x40,param_2,param_3);
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 4));
  }
  return;
}
