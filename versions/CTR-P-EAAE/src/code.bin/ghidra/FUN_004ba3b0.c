#include "../../../include/types.h"

void FUN_004ba3b0(int param_1)

{
  if (*(int **)(param_1 + 0x10) != NULL) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x34))();
    return;
  }
  return;
}
