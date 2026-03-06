/**
 * FUN_004bf030.c
 * Source line: 701188
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_004bf030(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)(param_1 + 4)) {
    do {
      piVar2 = (int *)*piVar1;
      FUN_00136e58(piVar1 + -0x40,param_2);
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 4));
  }
  return;
}
