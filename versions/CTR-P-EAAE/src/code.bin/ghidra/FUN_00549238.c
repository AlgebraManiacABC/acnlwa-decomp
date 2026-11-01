#include "../../../include/types.h"

void FUN_00549238(undefined4 param_1,int *param_2,int param_3,int param_4)

{
  uint uVar1;
  
  uVar1 = (uint)(param_4 << 0x15) >> 0x18;
  (**(code **)(*param_2 + 4))(param_2,param_3,uVar1);
  if (param_4 + uVar1 * -8 != 0) {
    (**(code **)(*param_2 + 4))(param_2,param_3 + uVar1,1);
    return;
  }
  return;
}
