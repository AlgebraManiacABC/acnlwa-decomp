/**
 * FUN_006094f0.c
 * Source line: 922585
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_006094f0(int param_1)

{
  if (*(int *)(param_1 + 0x54) != 2) {
    FUN_00606ec8(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x5c));
    *(code **)(param_1 + 0xc) = FUN_00608e34;
    *(undefined4 *)(param_1 + 0x10) = 0;
    return;
  }
  FUN_0081c0a0(param_1);
  return;
}
