/**
 * FUN_004224e8.c
 * Source line: 587765
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 FUN_004224e8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  FUN_0042632c(param_2);
  FUN_004261dc(*(undefined4 *)(param_1 + 0x40));
  *(undefined **)(param_1 + 0x24) = &UNK_004218e0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(char **)(param_1 + 0x2c) = "LocalAroundNetworkSearchJob::WaitAroundNetworkSearchActivated";
  return 0;
}
