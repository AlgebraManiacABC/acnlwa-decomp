#include "../../../include/types.h"

void FUN_0072d780(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x50);
  (**(code **)(*piVar1 + 8))();
  FUN_0082dff8(param_2,param_1 + 0x78);
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return;
}
