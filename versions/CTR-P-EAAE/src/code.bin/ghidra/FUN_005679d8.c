/**
 * FUN_005679d8.c
 * Source line: 809480
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_005679d8(int param_1)

{
  int *piVar1;
  
  (**(code **)(*(int *)(param_1 + 4) + 8))(param_1 + 4);
  FUN_00569ebc(param_1,400,0xf0);
  for (piVar1 = *(int **)(param_1 + 8); piVar1 != NULL; piVar1 = (int *)piVar1[2]) {
    piVar1[0x4d] = 0x400;
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}
