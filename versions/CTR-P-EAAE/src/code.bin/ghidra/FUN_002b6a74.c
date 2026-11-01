#include "../../../include/types.h"

void FUN_002b6a74(int *param_1)

{
  FUN_002b6cac(param_1,param_1 + 0x1c);
  FUN_002b6cac(param_1,param_1 + 0x26);
  (**(code **)(*param_1 + 0x38))(param_1);
  return;
}
