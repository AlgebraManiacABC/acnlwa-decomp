/**
 * FUN_00420058.c
 * Source line: 587017
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 FUN_00420058(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  FUN_0042632c(param_2);
  FUN_004261dc(*(undefined4 *)(param_1 + 0x40));
  *(code **)(param_1 + 0x24) = FUN_0041feb0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(char **)(param_1 + 0x2c) = "LocalDisconnectNetworkJob::TryPrepareDisconnectNetwork";
  return 0;
}
