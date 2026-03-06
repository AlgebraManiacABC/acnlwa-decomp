/**
 * FUN_00560688.c
 * Source line: 805323
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00560688(int param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  *(int **)(param_1 + 4) = param_2;
  *param_2 = param_1;
  param_2[1] = (int)puVar1;
  if (puVar1 != NULL) {
    *puVar1 = param_2;
  }
  return;
}
