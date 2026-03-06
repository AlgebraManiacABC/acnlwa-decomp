/**
 * FUN_0050cae0.c
 * Source line: 750677
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 * FUN_0050cae0(undefined4 *param_1)

{
  param_1[4] = 0;
  *param_1 = &UNK_009035dc;
  *(undefined2 *)(param_1 + 5) = 0xffff;
  param_1[2] = 0;
  param_1[3] = 0;
  __rt_memclr((undefined4 *)((int)param_1 + 0x16),0x24);
  return param_1;
}
