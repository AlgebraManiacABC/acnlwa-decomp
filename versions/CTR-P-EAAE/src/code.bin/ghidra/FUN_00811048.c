/**
 * FUN_00811048.c
 * Source line: 1220792
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00811048(undefined4 *param_1)

{
  param_1[1] = param_1 + 3;
  *param_1 = &DAT_0090558c;
  param_1[2] = 0x40;
  *(undefined1 *)(param_1[1] + 0x3f) = 0;
  *param_1 = &UNK_00905170;
  *(undefined1 *)param_1[1] = 0;
  *param_1 = &UNK_00904950;
  return;
}
