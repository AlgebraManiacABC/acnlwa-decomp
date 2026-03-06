/**
 * FUN_00561310.c
 * Source line: 806001
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 * FUN_00561310(undefined4 *param_1)

{
  param_1[1] = 0x7f7fffff;
  param_1[2] = 0x7f7fffff;
  param_1[3] = 0xff7fffff;
  param_1[4] = 0xff7fffff;
  *param_1 = &UNK_00905dd4;
  *(undefined1 *)(param_1 + 5) = uRam00975328;
  FUN_00561264(param_1);
  return param_1;
}
