#include "../../../include/types.h"

void FUN_0029c8d8(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_0075b8ec(param_1 + 0xbc);
  if (iVar1 != 0) {
    (**(code **)(*param_2 + 0x1c))(param_2);
    return;
  }
  (**(code **)(*param_2 + 0x14))(param_2,param_1 + 0xbc);
  return;
}
