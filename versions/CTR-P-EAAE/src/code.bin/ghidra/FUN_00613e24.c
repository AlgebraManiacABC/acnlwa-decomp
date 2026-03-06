/**
 * FUN_00613e24.c
 * Source line: 926823
 * Body lines: 3
 */
#include "../../../include/types.h"

undefined4 * FUN_00613e24(undefined4 *param_1)

{
  *param_1 = 0;
  __rt_memclr_w(param_1 + 1,0x1400);
  return param_1;
}
