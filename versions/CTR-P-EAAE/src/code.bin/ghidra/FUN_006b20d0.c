/**
 * FUN_006b20d0.c
 * Source line: 1010356
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined1 FUN_006b20d0(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0xc0c) != 0) {
    uVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc0c) + 4) + 8))();
    return uVar1;
  }
  return 0;
}
