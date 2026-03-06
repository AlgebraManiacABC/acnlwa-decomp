/**
 * FUN_0073ba6c.c
 * Source line: 1095133
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_0073ba6c(undefined4 *param_1,int *param_2)

{
  if (*(int *)*param_1 == -0x80000000) {
    *param_2 = ((((*param_2 + param_2[1]) - 1U & ~(param_2[1] - 1U)) + param_2[1] + 0x4b &
                ~(param_2[1] - 1U)) + param_2[1] + 0x1f & ~(param_2[1] - 1U)) + 0x20;
  }
  return;
}
