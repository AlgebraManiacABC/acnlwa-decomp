/**
 * FUN_00779664.c
 * Source line: 1136064
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00779664(undefined4 *param_1)

{
  *(undefined1 *)((int)param_1 + 9) = 0xff;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0xff;
  FUN_007796a0((int)param_1 + 10,0xffffffff);
  *(undefined4 *)((int)param_1 + 0x12) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x16) = 0xffffffff;
  return;
}
