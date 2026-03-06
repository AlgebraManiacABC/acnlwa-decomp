/**
 * FUN_001b732c.c
 * Source line: 222355
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_001b732c(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0xffff;
  *(undefined2 *)(param_1 + 4) = 0xffff;
  param_1[0xe] = 0;
  param_1[0xf] = 200;
  param_1[0x18] = 0;
  param_1[0x19] = 200;
  return;
}
