#include "../../../include/types.h"

void FUN_00584e0c(int param_1)

{
  if (*(char *)(param_1 + 0xc) == '+') {
    (**(code **)(**(int **)(param_1 + 8) + 4))();
    return;
  }
  return;
}
