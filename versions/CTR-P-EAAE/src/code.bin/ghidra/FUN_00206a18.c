#include "../../../include/types.h"

void FUN_00206a18(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_004ee4c8();
    FUN_004f1294(*(undefined4 *)(param_1 + 4));
    (**(code **)(**(int **)(param_1 + 4) + 8))();
    return;
  }
  return;
}
