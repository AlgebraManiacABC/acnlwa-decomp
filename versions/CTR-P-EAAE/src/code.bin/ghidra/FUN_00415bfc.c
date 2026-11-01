#include "../../../include/types.h"

void FUN_00415bfc(int param_1)

{
  if (*(code **)(param_1 + 0x78) != NULL) {
    (**(code **)(param_1 + 0x78))
              (2,*(undefined1 *)(*(int *)(param_1 + 0x14) + 0xe),*(undefined4 *)(param_1 + 0x7c));
    return;
  }
  return;
}
