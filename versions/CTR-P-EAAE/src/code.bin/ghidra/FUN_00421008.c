/**
 * FUN_00421008.c
 * Source line: 587435
 * Body lines: 7
 */
#include "../../../include/types.h"

uint FUN_00421008(int param_1)

{
  uint unaff_r5;
  
  FUN_004235a0(*(undefined4 *)(iRam00974a58 + 0x1c));
  FUN_004287d4(param_1 + 0x48);
  *(code **)(param_1 + 0x24) = FUN_00421b70;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(char **)(param_1 + 0x2c) = "LocalAroundNetworkSearchJob::WaitSendAroundNetworkStatusCompleted";
  return unaff_r5 & 0xff00 | 5;
}
