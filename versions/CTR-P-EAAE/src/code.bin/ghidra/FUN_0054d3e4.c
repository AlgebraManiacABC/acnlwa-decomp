/**
 * FUN_0054d3e4.c
 * Source line: 792586
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_0054d3e4(int param_1,undefined4 param_2)

{
  software_interrupt(GetSystemTick);
  *(int *)(param_1 + 0x150) = param_1;
  *(undefined4 *)(param_1 + 0x154) = param_2;
  return;
}
