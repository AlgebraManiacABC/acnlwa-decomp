#include "../../../include/types.h"

void FUN_00447ac0(int param_1)

{
  if (*(int **)(param_1 + 0x84) + -0x40000 < (int *)0x3ff00000) {
    (**(code **)(**(int **)(param_1 + 0x84) + 0x10))();
    return;
  }
  return;
}
