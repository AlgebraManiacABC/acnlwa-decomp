#include "../../../include/types.h"

void FUN_00406938(int param_1)

{
  if (*(int **)(param_1 + 0x6c) != NULL) {
    (**(code **)(**(int **)(param_1 + 0x6c) + 0x14))();
    return;
  }
  return;
}
