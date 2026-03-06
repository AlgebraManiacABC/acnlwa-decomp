/**
 * FUN_001186fc.c
 * Source line: 116859
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_001186fc(undefined4 param_1,int param_2)

{
  int local_18 [4];
  
  FUN_0031824c(local_18,param_1);
  if (param_2 == 0) {
    (**(code **)(local_18[0] + 0x1c))(local_18);
  }
  else {
    (**(code **)(local_18[0] + 0x14))(local_18,param_2);
  }
  NOP_003084c8();
  return;
}
