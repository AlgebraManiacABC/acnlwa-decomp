#include "../../../include/types.h"

void FUN_002132b4(int *param_1)

{
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined2 *)((int)param_1 + 10) = 0;
  (**(code **)(*param_1 + 0x14))();
  return;
}
