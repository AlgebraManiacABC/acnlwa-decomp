/**
 * FUN_00732720.c
 * Source line: 1088324
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_00732720(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (*param_2 != 0) {
    iVar1 = param_2[1];
  }
  if (*param_2 != 0 && iVar1 != 0) {
    for (piVar2 = *(int **)(param_1 + 8); piVar2 != (int *)(param_1 + 4); piVar2 = (int *)piVar2[1])
    {
      if (piVar2 == param_2) {
        return 1;
      }
    }
  }
  return 0;
}
