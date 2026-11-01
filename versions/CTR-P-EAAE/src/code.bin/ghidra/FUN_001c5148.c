#include "../../../include/types.h"

void FUN_001c5148(int *param_1)

{
  FUN_004b9b64(param_1 + 0xb,param_1 + 0x68);
  FUN_005697e0(0,param_1 + 0x68);
  *(undefined1 *)((int)param_1 + 0x14e) = 1;
  *(undefined1 *)(param_1 + 0x274) = 1;
  *(undefined1 *)((int)param_1 + 0x9d1) = 1;
  (**(code **)(*param_1 + 0x54))(param_1);
  return;
}
