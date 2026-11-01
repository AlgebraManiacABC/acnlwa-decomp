#include "../../../include/types.h"

void FUN_00566e40(int *param_1)

{
  (**(code **)(*param_1 + 0x24))(param_1);
  if ((int *)param_1[0xd] != NULL) {
    (**(code **)(*(int *)param_1[0xd] + 0x10))();
    return;
  }
  return;
}
