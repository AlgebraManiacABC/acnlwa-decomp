/**
 * FUN_00298c10.c
 * Source line: 338987
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00298c10(int *param_1,int param_2)

{
  undefined4 local_28;
  float local_24;
  undefined4 local_20;
  
  *(undefined1 *)((int)param_1 + 0x6fb) = 1;
  FUN_0058d3b4(param_1[0x1cc],0x10003a7);
  local_28 = 0;
  local_24 = 0.0;
  local_20 = 0;
  FUN_00148710(&local_28,param_1[0x1d9] + 0x80);
  (**(code **)(*param_1 + 0x14))(*(float *)(param_2 + 4) - local_24,param_1);
  *(undefined1 *)((int)param_1 + 0x6fa) = 1;
  FUN_002993ac(param_1,1);
  param_1[0x1c6] = 0;
  return;
}
