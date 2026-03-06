/**
 * FUN_006a8bf8.c
 * Source line: 1005087
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_006a8bf8(undefined1 *param_1)

{
  *param_1 = 7;
  param_1[1] = 0;
  software_interrupt(GetSystemTick);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 7;
  return;
}
