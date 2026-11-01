#include "../../../include/types.h"

void FUN_00541b10(int *param_1)

{
  *(undefined1 *)((int)param_1 + 0x1e9) = 0;
  (**(code **)(*param_1 + 0x44))(param_1);
  (**(code **)(*param_1 + 0x48))(param_1);
  return;
}
