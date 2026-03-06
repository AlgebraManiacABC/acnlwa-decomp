/**
 * FUN_004c6c34.c
 * Source line: 706868
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_004c6c34(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0x40c80000;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  *(undefined1 *)((int)param_1 + 0xe) = 0;
  return;
}
