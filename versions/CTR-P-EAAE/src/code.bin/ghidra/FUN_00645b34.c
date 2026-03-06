/**
 * FUN_00645b34.c
 * Source line: 957550
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00645b34(int param_1,int param_2)

{
  if (param_2 != 1) {
    *(code **)(param_1 + 0x2c8) = FUN_00645b34;
    *(undefined4 *)(param_1 + 0x2cc) = 0;
    return;
  }
  FUN_002fae84();
  return;
}
