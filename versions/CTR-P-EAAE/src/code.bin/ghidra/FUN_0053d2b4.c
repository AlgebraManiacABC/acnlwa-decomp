/**
 * FUN_0053d2b4.c
 * Source line: 782378
 * Body lines: 4
 */
#include "../../../include/types.h"

int FUN_0053d2b4(int param_1,undefined4 param_2)

{
  software_interrupt(GetSystemTick);
  *(int *)param_1 = param_1;
  *(undefined4 *)(param_1 + 4) = param_2;
  return param_1;
}
