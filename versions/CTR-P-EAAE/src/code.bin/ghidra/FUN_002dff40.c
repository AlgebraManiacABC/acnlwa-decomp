#include "../../../include/types.h"

void FUN_002dff40(int *param_1,uint param_2,uint param_3)

{
  if ((param_2 & param_3) != 0) {
    (**(code **)(*param_1 + 0x3c))(param_1);
  }
  *(char *)((int)param_1 + 0xd7) = (char)param_2;
  if ((char)param_1[0x60] != '\x01') {
    (**(code **)(*param_1 + 0x34))(param_1,param_1 + 8);
    (**(code **)(*param_1 + 0x34))(param_1,param_1 + 0x12,param_2);
    return;
  }
  (**(code **)(*param_1 + 0x34))(param_1,param_1 + 0x38,param_2);
  (**(code **)(*param_1 + 0x34))(param_1,param_1 + 0x42,param_2);
  return;
}
