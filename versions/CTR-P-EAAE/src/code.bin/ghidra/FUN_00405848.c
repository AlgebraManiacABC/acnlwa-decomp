#include "../../../include/types.h"

void FUN_00405848(int param_1)

{
  if (*(int **)(param_1 + 0x6c) + -0x40000 < (int *)0x3ff00000) {
    (**(code **)(**(int **)(param_1 + 0x6c) + 0xc))();
    return;
  }
  return;
}
