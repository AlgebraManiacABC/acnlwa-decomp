/**
 * FUN_00118738.c
 * Source line: 116886
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_00118738(undefined4 *param_1,undefined4 param_2)

{
  __rt_memclr(param_1,0x1ac);
  *(undefined2 *)((int)param_1 + 0x1aa) = 1;
  FUN_0030f56c((int)param_1 + 0x1a6,param_2);
  return;
}
