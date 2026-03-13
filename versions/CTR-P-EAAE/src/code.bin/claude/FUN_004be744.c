/**
 * FUN_004be744.c
 * Source line: 700377
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 * FUN_004be744(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)((int)param_1 + 0x12) = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 0x26) = 0;
  __rt_memclr_w(param_1 + 5,0x12);
  FUN_004be584(param_1,param_2,param_3);
  return param_1;
}
