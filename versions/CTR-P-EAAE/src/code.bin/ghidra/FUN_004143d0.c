#include "../../../include/types.h"

void FUN_004143d0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  *(short *)(param_1 + 4) = (short)param_3 + (short)param_4;
  nnnstdMemCpy(param_1[1] + (uint)*(ushort *)((int)param_1 + 0xe) + param_3,param_2,param_4);
  (**(code **)(*param_1 + 8))(param_1);
  return;
}
