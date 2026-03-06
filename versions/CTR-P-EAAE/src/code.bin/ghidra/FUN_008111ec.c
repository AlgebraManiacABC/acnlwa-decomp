/**
 * FUN_008111ec.c
 * Source line: 1220861
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_008111ec(undefined4 *param_1)

{
  param_1[1] = param_1 + 3;
  *param_1 = &DAT_0090558c;
  param_1[2] = 0x60;
  *(undefined1 *)(param_1[1] + 0x5f) = 0;
  *param_1 = &UNK_009051c0;
  *(undefined1 *)param_1[1] = 0;
  *param_1 = &UNK_009049b4;
  return;
}
