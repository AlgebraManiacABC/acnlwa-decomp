/**
 * FUN_004287d4.c
 * Source line: 592223
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_004287d4(int param_1,undefined4 param_2)

{
  software_interrupt(GetSystemTick);
  *(int *)param_1 = param_1;
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}
