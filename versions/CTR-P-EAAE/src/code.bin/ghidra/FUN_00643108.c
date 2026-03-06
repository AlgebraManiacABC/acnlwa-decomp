/**
 * FUN_00643108.c
 * Source line: 956042
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00643108(int *param_1,undefined4 param_2,char *param_3)

{
  undefined4 extraout_r3;
  int local_3c;
  undefined4 local_38;
  
  FUN_00810f00(&local_3c);
  FUN_0030f48c(&local_3c,"%s",param_3,extraout_r3);
  (**(code **)(*param_1 + 0x140))(param_1,&local_3c);
  (**(code **)(local_3c + 8))(&local_3c);
  FUN_0060351c(param_1[1],param_2,local_38,0,3);
  return;
}
