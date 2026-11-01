#include "../../../include/types.h"

void FUN_00718ff0(int param_1)

{
  if (*(int **)(param_1 + 0x118) != NULL) {
    (**(code **)(**(int **)(param_1 + 0x118) + 0x20))();
    return;
  }
  return;
}
