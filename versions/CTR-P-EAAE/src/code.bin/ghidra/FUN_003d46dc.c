/**
 * FUN_003d46dc.c
 * Source line: 545917
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_003d46dc(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != NULL) {
    if (*(int *)(param_1 + 0x78) != 0) {
      (**(code **)(*piVar1 + 0x7c))(piVar1,*(int *)(param_1 + 0x78),param_1);
    }
    if (param_2 != 0) {
      (**(code **)(**(int **)(param_1 + 4) + 0x78))(*(int **)(param_1 + 4),param_2,param_1);
    }
  }
  *(int *)(param_1 + 0x78) = param_2;
  return;
}
