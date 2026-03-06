/**
 * FUN_0046fac0.c
 * Source line: 640922
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_0046fac0(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((((uint)param_2 & 3) == 0) && (0x236f < param_3)) {
    __rt_memclr(param_2,0x2370);
    *param_1 = param_2;
    *(undefined1 *)(param_1 + 1) = 1;
    return 1;
  }
  return 0;
}
