#include "../../../include/types.h"

undefined4 FUN_00412c78(int *param_1)

{
  undefined4 uVar1;
  
  if ((char)param_1[0x10] != '\x01') {
    FUN_0042632c(param_1 + 0x10);
    uVar1 = (**(code **)(*param_1 + 0x3c))(param_1,param_1 + 0x10);
    return uVar1;
  }
  return 0xe0a14827;
}
