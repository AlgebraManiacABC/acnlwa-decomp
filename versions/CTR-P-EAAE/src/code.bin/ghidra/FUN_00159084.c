/**
 * FUN_00159084.c
 * Source line: 171785
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00159084(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_4 = param_1;
  param_4[1] = param_2 >> 3;
  __rt_memclr_w(param_4 + 2,0x80);
  param_4[0x22] = 0;
  param_4[0x23] = 0;
  param_4[0x24] = 0;
  param_4[0x25] = param_3;
  *(undefined1 *)(param_4 + 0x26) = 1;
  return;
}
