/**
 * FUN_0032a31c.c
 * Source line: 430241
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_0032a31c(undefined1 *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                 Item_t *param_5,undefined1 param_6)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)(param_1 + 8) = param_4;
  param_1[0x10] = param_6;
  Item_Copy((Item_t *)(param_1 + 0xc),param_5);
  return;
}
