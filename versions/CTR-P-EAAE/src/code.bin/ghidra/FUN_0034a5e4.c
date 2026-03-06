/**
 * FUN_0034a5e4.c
 * Source line: 447134
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 * FUN_0034a5e4(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xffffffff;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[0x24] = 0;
  param_1[0xa5] = 0;
  *(undefined1 *)(param_1 + 0xa6) = 3;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xd9] = 0;
  __rt_memclr_w(param_1 + 0x4a1a,0x80);
  return param_1;
}
