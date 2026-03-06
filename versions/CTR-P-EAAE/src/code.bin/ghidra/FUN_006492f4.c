/**
 * FUN_006492f4.c
 * Source line: 958614
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_006492f4(int *param_1,char *param_2)

{
  undefined4 extraout_r3;
  int local_38;
  undefined4 local_34;
  
  FUN_00810f00(&local_38);
  FUN_0030f48c(&local_38,"%s",param_2,extraout_r3);
  (**(code **)(*param_1 + 0x140))(param_1,&local_38);
  (**(code **)(local_38 + 8))(&local_38);
  FUN_005dd51c(param_1,local_34);
  return;
}
