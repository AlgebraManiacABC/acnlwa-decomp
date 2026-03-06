/**
 * FUN_004dd660.c
 * Source line: 723189
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_004dd660(undefined4 param_1)

{
  char *pcVar1;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  int local_28;
  undefined4 local_24;
  
  FUN_00810ccc(&local_28);
  pcVar1 = (char *)FUN_006d276c();
  FUN_0030f48c(&local_28,"DL_C%04d",pcVar1,extraout_r3);
  (**(code **)(local_28 + 8))(&local_28);
  FUN_0050deec(param_1,local_24);
  FUN_0030f48c(&local_28,"V%d",(char *)0x109e,extraout_r3_00);
  (**(code **)(local_28 + 8))(&local_28);
  FUN_0050deec(param_1,local_24);
  return;
}
