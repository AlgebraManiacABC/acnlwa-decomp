/**
 * FUN_004231bc.c
 * Source line: 588078
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_004231bc(int param_1,undefined4 param_2,int param_3)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  FUN_0042632c(param_2);
  FUN_004261dc(*(undefined4 *)(param_1 + 0x40));
  if (param_3 == 0) {
    *(code **)(param_1 + 0x24) = FUN_004230bc;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "LocalForceDisconnectNetworkJob::WaitHostMigrationEnd";
  }
  else if (param_3 == 1) {
    *(code **)(param_1 + 0x24) = FUN_00423024;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "LocalForceDisconnectNetworkJob::WaitDisconnected";
  }
  return 0;
}
