/**
 * FUN_00813d7c.c
 * Source line: 1222322
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_00813d7c(undefined2 *param_1,int param_2)

{
  if (param_2 != 0) {
    __aeabi_memset(param_1,2,0xff);
    return;
  }
  *param_1 = 0;
  return;
}
