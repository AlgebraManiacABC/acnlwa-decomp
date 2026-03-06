/**
 * FUN_004f6900.c
 * Source line: 741525
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_004f6900(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    piVar1 = *(int **)(param_1 + iVar2 * 4 + 0x24);
    if (piVar1 != NULL) {
      (**(code **)(*piVar1 + 0x18))(piVar1,param_2);
    }
    iVar2 += 1;
  } while (iVar2 < 2);
  return;
}
