/**
 * FUN_00421ac8.c
 * Source line: 587562
 * Body lines: 8
 */
#include "../../../include/types.h"

uint FUN_00421ac8(int param_1)

{
  uint unaff_r5;
  
  FUN_004239ac(*(undefined4 *)(iRam00974a58 + 0x1c));
  *(code **)(param_1 + 0x24) = FUN_00421f14;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(char **)(param_1 + 0x2c) =
       "LocalAroundNetworkSearchJob::WaitSendStopAroundNetworkSearchMessageCompleted";
  FUN_004287d4(param_1 + 0x48);
  return unaff_r5 & 0xff00 | 5;
}
