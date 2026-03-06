/**
 * FUN_00421b1c.c
 * Source line: 587578
 * Body lines: 8
 */
#include "../../../include/types.h"

uint FUN_00421b1c(int param_1)

{
  uint unaff_r5;
  
  FUN_00423a50(*(undefined4 *)(iRam00974a58 + 0x1c));
  *(undefined4 *)(param_1 + 0x24) = 0x422160;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(char **)(param_1 + 0x2c) =
       "LocalAroundNetworkSearchJob::WaitSendStartAroundNetworkSearchMessageCompleted";
  FUN_004287d4(param_1 + 0x48);
  return unaff_r5 & 0xff00 | 5;
}
