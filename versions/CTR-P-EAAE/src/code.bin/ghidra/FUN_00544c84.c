/**
 * FUN_00544c84.c
 * Source line: 787787
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00544c84(byte *param_1,char *param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 extraout_r3;
  int local_40;
  undefined4 local_3c;
  
  FUN_00810f00(&local_40);
  if (param_2 == NULL) {
    uVar1 = FUN_0030f48c(&local_40,"%u",(char *)(uint)*param_1,extraout_r3);
  }
  else {
    uVar1 = FUN_0030f48c(&local_40,param_2,(char *)(uint)*param_1,extraout_r3);
  }
  (**(code **)(local_40 + 8))(&local_40);
  (**(code **)(*param_3 + 8))(param_3,local_3c,uVar1);
  return;
}
