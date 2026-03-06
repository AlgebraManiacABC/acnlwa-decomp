/**
 * FUN_004d358c.c
 * Source line: 716461
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_004d358c(int param_1,undefined4 *param_2)

{
  param_2[0x4b] = 0;
  if (param_2 != NULL) {
    (**(code **)*param_2)(param_2);
    FUN_004d448c(param_1 + 8,param_2);
    return;
  }
  return;
}
