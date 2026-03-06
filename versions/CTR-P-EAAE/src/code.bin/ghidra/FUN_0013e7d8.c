/**
 * FUN_0013e7d8.c
 * Source line: 150959
 * Body lines: 8
 */
#include "../../../include/types.h"

int * FUN_0013e7d8(int *param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_2 + 4);
  *param_3 = param_2;
  param_3[1] = (int)puVar1;
  *(int **)(param_2 + 4) = param_3;
  *puVar1 = param_3;
  *param_1 = *param_1 + 1;
  return param_3;
}
