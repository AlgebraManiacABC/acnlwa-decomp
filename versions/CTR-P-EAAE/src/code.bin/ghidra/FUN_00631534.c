#include "../../../include/types.h"

void FUN_00631534(int *param_1)

{
  if (param_1[0x40b] != 0 && param_1[0x40b] != -0x38) {
    FUN_0051f55c();
  }
  (**(code **)(*param_1 + 0x1a0))(param_1);
  return;
}
