/**
 * FUN_00360e18.c
 * Source line: 465451
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00360e18(undefined4 *param_1)

{
  param_1[1] = param_1 + 4;
  param_1[2] = 0x100;
  *param_1 = &UNK_008fb670;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 0x84) = 0;
  *(undefined1 *)((int)param_1 + 0x211) = 1;
  *(undefined1 *)((int)param_1 + 0x212) = 1;
  param_1[3] = param_1 + 4;
  return;
}
