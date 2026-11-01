#include "../../../include/types.h"

void FUN_005d5714(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0xc))(param_2);
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  return;
}
