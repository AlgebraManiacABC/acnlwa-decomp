/**
 * FUN_0045f194.c
 * Source line: 627087
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0045f194(int param_1)

{
  if (*(int *)(param_1 + 0x24) - 0x100000U < 0x3ff00000) {
    FUN_0045ab5c();
  }
  if (*(int **)(param_1 + 0x30) != NULL) {
    (**(code **)(**(int **)(param_1 + 0x30) + 4))();
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*(int **)(param_1 + 0x2c) != NULL) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 4))();
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}
