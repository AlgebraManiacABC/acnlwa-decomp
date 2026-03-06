/**
 * FUN_00419ca0.c
 * Source line: 583906
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_00419ca0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(iRam00974a58 + 0x38) + 0x20))
                    (*(int **)(iRam00974a58 + 0x38),*(undefined4 *)(param_1 + 0x44));
  if (-1 < iVar1) {
    *(undefined4 *)(param_1 + 0x40) = param_2;
    FUN_0042632c(param_2);
    FUN_004261dc(*(undefined4 *)(param_1 + 0x40));
    FUN_004282d4(*(undefined4 *)(iRam00974a58 + 0x38),1);
    *(undefined1 *)(iRam00974a58 + 0x81) = 0;
    *(code **)(param_1 + 0x24) = FUN_00419b4c;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "LocalScanNetworkJob::WaitScanNetwork";
    iVar1 = 0;
  }
  return iVar1;
}
