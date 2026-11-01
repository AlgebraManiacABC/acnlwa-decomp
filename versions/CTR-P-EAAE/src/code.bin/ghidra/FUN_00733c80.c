#include "../../../include/types.h"

void FUN_00733c80(int param_1)

{
  if (*(int **)(param_1 + 8) + -0x40000 < (int *)0x3ff00000) {
    (**(code **)(**(int **)(param_1 + 8) + 0x28))();
    return;
  }
  return;
}
