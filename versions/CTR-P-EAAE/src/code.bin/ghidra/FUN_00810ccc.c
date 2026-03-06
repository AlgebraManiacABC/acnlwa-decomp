/**
 * FUN_00810ccc.c
 * Source line: 1220645
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00810ccc(undefined4 *param_1)

{
  param_1[1] = param_1 + 3;
  *param_1 = &DAT_0090558c;
  param_1[2] = 0x11;
  *(undefined1 *)(param_1[1] + 0x10) = 0;
  *param_1 = &DAT_009050d0;
  *(undefined1 *)param_1[1] = 0;
  *param_1 = &DAT_00904888;
  return;
}
