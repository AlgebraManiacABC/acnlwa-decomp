#include "../../../include/types.h"

float FUN_007124b4(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x40))();
  return *(float *)(iVar1 + 0x8c) * 0.00625;
}
