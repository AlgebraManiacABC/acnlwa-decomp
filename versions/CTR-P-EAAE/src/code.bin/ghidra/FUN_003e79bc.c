/**
 * FUN_003e79bc.c
 * Source line: 559976
 * Body lines: 5
 */
#include "../../../include/types.h"

undefined4 * FUN_003e79bc(undefined4 *param_1)

{
  *param_1 = &UNK_008fefb8;
  __rt_memclr_w(param_1 + 1,0x554);
  *(undefined1 *)(param_1 + 0x156) = 0;
  param_1[0x157] = 0;
  return param_1;
}
