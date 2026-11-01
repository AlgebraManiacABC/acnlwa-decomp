#include "../../../include/types.h"

void FUN_002b6c68(int *param_1,uint param_2,uint param_3)

{
  if ((param_2 & param_3) != 0) {
    (**(code **)(*param_1 + 0x3c))(param_1);
  }
  *(char *)((int)param_1 + 0xd7) = (char)param_2;
  (**(code **)(*param_1 + 0x34))(param_1,param_1 + 0x12,param_2);
  return;
}
