#include "../../../include/types.h"

void FUN_004b9b38(int param_1)

{
  if (*(int **)(param_1 + 0x10) != NULL) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x5c))();
    return;
  }
  return;
}
