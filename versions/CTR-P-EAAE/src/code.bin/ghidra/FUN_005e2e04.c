#include "../../../include/types.h"

void FUN_005e2e04(int param_1)

{
  *(undefined1 *)(param_1 + 0xc0) = 0;
  if (*(int **)(param_1 + 0xb8) != NULL) {
    (**(code **)(**(int **)(param_1 + 0xb8) + 0x74))();
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  if (*(int **)(param_1 + 0xbc) != NULL) {
    (**(code **)(**(int **)(param_1 + 0xbc) + 0x74))();
    *(undefined4 *)(param_1 + 0xbc) = 0;
  }
  return;
}
