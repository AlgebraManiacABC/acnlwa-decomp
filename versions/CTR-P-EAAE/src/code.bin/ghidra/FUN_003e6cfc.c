/**
 * FUN_003e6cfc.c
 * Source line: 559586
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_003e6cfc(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x44) + 0x20))();
  if (iVar1 != 0) {
    (**(code **)(**(int **)(param_1 + 0x44) + 0x10))();
    *(code **)(param_1 + 0x24) = FUN_003e726c;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(char **)(param_1 + 0x2c) = "NatDetectionJob::StepStart";
    return;
  }
  *(char **)(param_1 + 0x2c) = "NatDetectionJob::StepEnd";
  *(code **)(param_1 + 0x24) = FUN_003e6e00;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}
