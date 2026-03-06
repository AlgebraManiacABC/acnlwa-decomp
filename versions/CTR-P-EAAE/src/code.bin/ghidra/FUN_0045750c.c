/**
 * FUN_0045750c.c
 * Source line: 621433
 * Body lines: 5
 */
#include "../../../include/types.h"

int FUN_0045750c(int param_1)

{
  __rt_memclr_w(param_1,0x10c);
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined1 *)(param_1 + 0x118) = 0;
  return param_1;
}
