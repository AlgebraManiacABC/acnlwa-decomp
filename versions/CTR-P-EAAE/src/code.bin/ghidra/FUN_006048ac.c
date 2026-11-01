#include "../../../include/types.h"

void FUN_006048ac(int *param_1,undefined4 param_2)

{
  undefined4 local_8;
  
  local_8 &= 0xffff0000;
  (**(code **)(*param_1 + 0xb8))(param_1,0,param_2,local_8);
  return;
}
