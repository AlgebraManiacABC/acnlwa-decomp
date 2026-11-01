#include "../../../include/types.h"

void FUN_0041440c(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_lr;
  
  FUN_0041443c(param_2,param_3 + 4,4);
  nnnstdMemCpy((uint)*(ushort *)((int)param_2 + 0xe) + (uint)*(ushort *)(param_2 + 4) + param_2[1],
               *param_3,0x2f0,param_2[1],unaff_r4,unaff_r5,unaff_r6,unaff_lr);
  *(short *)(param_2 + 4) = (short)param_2[4] + 0x2f0;
  (**(code **)(*param_2 + 8))(param_2);
  return;
}
