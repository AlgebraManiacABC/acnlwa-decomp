/**
 * FUN_0054ee44.c
 * Source line: 793597
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0054ee44(int param_1,int param_2)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_0054dd24(*(int *)(param_1 + 0x10),*(undefined4 *)(*(int *)(param_1 + 8) + param_2 * 4));
  }
  piVar1 = *(int **)(*(int *)(param_1 + 8) + param_2 * 4);
  if (piVar1 != NULL) {
    (**(code **)(*piVar1 + 8))();
  }
  *(undefined4 *)(*(int *)(param_1 + 8) + param_2 * 4) = 0;
  return;
}
