#include "../../../include/types.h"

void FUN_00415be0(int param_1,undefined4 param_2)

{
  if (*(code **)(param_1 + 0x78) != NULL) {
    (**(code **)(param_1 + 0x78))(1,param_2,*(undefined4 *)(param_1 + 0x7c));
    return;
  }
  return;
}
