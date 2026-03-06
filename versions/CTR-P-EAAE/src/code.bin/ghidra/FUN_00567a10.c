/**
 * FUN_00567a10.c
 * Source line: 809496
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_00567a10(int param_1,int param_2)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(param_1 + 4); piVar1 != NULL; piVar1 = (int *)piVar1[2]) {
    piVar1[0x4d] = param_2;
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}
