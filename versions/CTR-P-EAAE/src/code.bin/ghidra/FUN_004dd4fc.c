/**
 * FUN_004dd4fc.c
 * Source line: 723123
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_004dd4fc(undefined4 param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 extraout_r3;
  int local_30;
  undefined4 local_2c;
  
  FUN_00810ccc(&local_30);
  pcVar1 = (char *)FUN_006d276c();
  uVar2 = FUN_006d337c();
  FUN_0030f48c(&local_30,"DL_A%04d%04d",pcVar1,uVar2);
  (**(code **)(local_30 + 8))(&local_30);
  FUN_0050deec(param_1,local_2c);
  FUN_0030f48c(&local_30,"V%d",(char *)0x109e,extraout_r3);
  (**(code **)(local_30 + 8))(&local_30);
  FUN_0050deec(param_1,local_2c);
  return;
}
