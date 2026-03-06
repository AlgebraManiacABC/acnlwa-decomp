/**
 * FUN_00747b4c.c
 * Source line: 1103770
 * Body lines: 9
 */
#include "../../../include/types.h"

int FUN_00747b4c(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  for (piVar1 = *(int **)(param_1 + 0xd000); piVar1 != NULL; piVar1 = (int *)FUN_00747c24(piVar1)) {
    if (*(ushort *)(*piVar1 + 0xc) == param_2) {
      iVar2 += 1;
    }
  }
  return iVar2;
}
