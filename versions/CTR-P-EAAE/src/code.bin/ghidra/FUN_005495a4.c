/**
 * FUN_005495a4.c
 * Source line: 790421
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_005495a4(undefined4 param_1,undefined4 param_2,int param_3)

{
  FUN_00545b1c(param_3);
  if (*(int **)(param_3 + 8) != NULL) {
    (**(code **)(**(int **)(param_3 + 8) + 0x10))();
    *(undefined4 *)(param_3 + 8) = 0;
  }
  return;
}
