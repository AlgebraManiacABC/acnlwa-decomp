/**
 * FUN_001b264c.c
 * Source line: 219783
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_001b264c(undefined4 *param_1)

{
  __rt_memclr(param_1,200);
  *(undefined1 *)((int)param_1 + 199) = 0xff;
  *(undefined1 *)((int)param_1 + 0xc6) = 0xff;
  return;
}
