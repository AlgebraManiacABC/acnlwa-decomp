/**
 * FUN_00810f00.c
 * Source line: 1220738
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00810f00(undefined4 *param_1)

{
  param_1[1] = param_1 + 3;
  *param_1 = &DAT_0090558c;
  param_1[2] = 0x20;
  *(undefined1 *)(param_1[1] + 0x1f) = 0;
  *param_1 = &DAT_00905120;
  *(undefined1 *)param_1[1] = 0;
  *param_1 = &DAT_009048ec;
  return;
}
