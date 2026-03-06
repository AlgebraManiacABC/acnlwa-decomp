/**
 * FUN_00641d28.c
 * Source line: 955448
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00641d28(int param_1,int param_2)

{
  if (param_2 == 7) {
    FUN_002fb94c();
    return;
  }
  if (param_2 != 10) {
    *(code **)(param_1 + 0x2c8) = FUN_00641d28;
    *(undefined4 *)(param_1 + 0x2cc) = 0;
    return;
  }
  FUN_002fb94c();
  return;
}
