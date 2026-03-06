/**
 * FUN_0061fd08.c
 * Source line: 934924
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 * FUN_0061fd08(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 0xe) = 0;
  *param_1 = &UNK_0090ac00;
  __rt_memclr_w(param_1 + 4,0x200);
  param_1[0x84] = 0;
  __rt_memclr_w(param_1 + 4,0x200);
  param_1[0x84] = 0;
  return param_1;
}
