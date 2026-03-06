/**
 * FUN_00429000.c
 * Source line: 592692
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_00429000(int param_1,int param_2,int *param_3)

{
  *param_3 = param_2;
  param_3[1] = *(int *)(param_2 + 4);
  **(undefined4 **)(param_2 + 4) = param_3;
  *(int **)(param_2 + 4) = param_3;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return;
}
