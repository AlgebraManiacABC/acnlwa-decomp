/**
 * FUN_00745f10.c
 * Source line: 1102156
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_00745f10(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 4);
  if (piVar3 != NULL) {
    piVar1 = (int *)(**(code **)(*piVar3 + 8))(piVar3);
    do {
      if (piVar1 == (int *)0x9750d0) goto LAB_00745f54;
      piVar1 = (int *)*piVar1;
    } while (piVar1 != NULL);
  }
  piVar3 = NULL;
LAB_00745f54:
  iVar2 = (**(code **)(*(int *)piVar3[0x88] + 0x18))();
  return *(int *)(iVar2 + 4) + param_2 * 0x40;
}
