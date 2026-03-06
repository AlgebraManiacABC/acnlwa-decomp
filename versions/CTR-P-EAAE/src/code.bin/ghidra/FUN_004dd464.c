/**
 * FUN_004dd464.c
 * Source line: 723103
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_004dd464(undefined4 param_1)

{
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  int local_28;
  undefined4 local_24;
  
  FUN_00810ccc(&local_28);
  FUN_0030f48c(&local_28,"N%02d",(char *)(uint)*(byte *)(DAT_00951698 + 0x27c2),extraout_r3);
  (**(code **)(local_28 + 8))(&local_28);
  FUN_0050deec(param_1,local_24);
  FUN_0030f48c(&local_28,"V%d",(char *)0x109e,extraout_r3_00);
  (**(code **)(local_28 + 8))(&local_28);
  FUN_0050deec(param_1,local_24);
  return;
}
