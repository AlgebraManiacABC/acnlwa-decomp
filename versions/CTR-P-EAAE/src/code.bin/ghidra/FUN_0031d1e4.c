/**
 * FUN_0031d1e4.c
 * Source line: 422129
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0031d1e4(int *param_1,float *param_2)

{
  float local_20 [4];
  
  *(undefined1 *)((int)param_1 + 0x6fb) = 1;
  FUN_0058d3b4(param_1[0x1cc],0x10003a7);
  FUN_0071ae0c(local_20,param_1,param_1[0x1d9]);
  (**(code **)(*param_1 + 0x14))(*param_2 - local_20[0],param_1);
  FUN_002993a0(param_1);
  param_1[0x1c6] = 0;
  return;
}
