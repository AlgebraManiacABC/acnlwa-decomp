#include "../../../include/types.h"

void FUN_001e8cd0(int *param_1)

{
  *(char *)((int)param_1 + 0xc9) = (char)param_1[2];
  (**(code **)(*param_1 + 0x94))(param_1);
  return;
}
