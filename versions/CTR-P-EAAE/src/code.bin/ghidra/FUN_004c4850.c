#include "../../../include/types.h"

void FUN_004c4850(int *param_1,undefined1 param_2)

{
  *(undefined1 *)((int)param_1 + 0x9d) = param_2;
  if (param_1[4] != 0) {
    FUN_00136d04(param_1[4],param_1);
  }
  (**(code **)(*param_1 + 0x24))(param_1);
  return;
}
