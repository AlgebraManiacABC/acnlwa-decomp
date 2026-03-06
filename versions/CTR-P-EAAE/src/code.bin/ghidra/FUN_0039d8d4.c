/**
 * FUN_0039d8d4.c
 * Source line: 506455
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0039d8d4(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_007d4ed8(param_1 + 4);
  piVar2 = (int *)**(int **)(iVar1 + 0x10);
  if (piVar2 != *(int **)(iVar1 + 0x10)) {
    *(int *)piVar2[1] = *piVar2;
    *(int *)(*piVar2 + 4) = piVar2[1];
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + -1;
    (**(code **)piVar2[2])(piVar2 + 2);
    *piVar2 = *(int *)(iVar1 + 4);
    *(int **)(iVar1 + 4) = piVar2;
  }
  return;
}
