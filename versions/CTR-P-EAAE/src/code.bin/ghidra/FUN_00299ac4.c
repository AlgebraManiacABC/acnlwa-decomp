/**
 * FUN_00299ac4.c
 * Source line: 339513
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00299ac4(int *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = (float)param_1[0x1c6];
  local_20 = 0;
  local_1c = 0.0;
  local_18 = 0;
  FUN_00148710(&local_20,param_1[0x1d9] + 0x80);
  (**(code **)(*param_1 + 0x14))((fVar1 + fVar2) - local_1c,param_1);
  return;
}
