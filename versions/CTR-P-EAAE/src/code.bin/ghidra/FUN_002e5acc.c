#include "../../../include/types.h"

void FUN_002e5acc(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(code **)(param_1 + 0x1c) != NULL) {
    (**(code **)(param_1 + 0x1c))(param_2,param_3,*(undefined4 *)(param_1 + 0x20));
    return;
  }
  return;
}
