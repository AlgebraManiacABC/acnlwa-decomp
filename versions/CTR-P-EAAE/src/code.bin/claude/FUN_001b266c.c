/**
 * FUN_001b266c.c
 * Source line: 219794
 * Body lines: 4
 */
#include "../../../include/types.h"

undefined4 * FUN_001b266c(undefined4 *param_1)

{
  __rt_memclr(param_1,200);
  *(undefined1 *)((int)param_1 + 199) = 0xff;
  *(undefined1 *)((int)param_1 + 0xc6) = 0xff;
  return param_1;
}
