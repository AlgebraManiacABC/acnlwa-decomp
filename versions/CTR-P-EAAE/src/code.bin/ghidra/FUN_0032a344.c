/**
 * FUN_0032a344.c
 * Source line: 430255
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0032a344(undefined1 *param_1)

{
  *param_1 = 0x22;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  Item_Copy((Item_t *)(param_1 + 0xc),(Item_t *)&DAT_0095bfdc);
  param_1[0x10] = 0;
  param_1[0x11] = 200;
  param_1[0x12] = 200;
  param_1[0x13] = 0;
  return;
}
