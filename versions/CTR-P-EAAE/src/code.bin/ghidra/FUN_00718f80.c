#include "../../../include/types.h"

void FUN_00718f80(int param_1)

{
  if (*(int **)(param_1 + 0x118) != NULL) {
    (**(code **)(**(int **)(param_1 + 0x118) + 0xc))();
    return;
  }
  return;
}
