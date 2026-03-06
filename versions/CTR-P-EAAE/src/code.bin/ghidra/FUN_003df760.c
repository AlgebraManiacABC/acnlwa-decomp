/**
 * FUN_003df760.c
 * Source line: 554640
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_003df760(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = param_2;
  param_1[1] = param_2 + 0x300;
  param_1[2] = 0;
  __rt_memclr(param_2,0xc00);
  return;
}
