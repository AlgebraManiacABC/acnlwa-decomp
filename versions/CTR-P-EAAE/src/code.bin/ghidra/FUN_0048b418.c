/**
 * FUN_0048b418.c
 * Source line: 661418
 * Body lines: 3
 */
#include "../../../include/types.h"

void FUN_0048b418(int *param_1,uint *param_2,uint param_3)

{
  __rt_memcpy((uint *)(*param_1 + param_1[1]),param_2,param_3);
  param_1[1] = param_1[1] + param_3;
  return;
}
