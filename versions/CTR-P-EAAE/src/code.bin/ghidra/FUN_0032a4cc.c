/**
 * FUN_0032a4cc.c
 * Source line: 430315
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined1 * FUN_0032a4cc(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x10] = param_2[0x10] != '\0';
  Item_Copy((Item_t *)(param_1 + 0xc),(Item_t *)(param_2 + 0xc));
  return param_1;
}
