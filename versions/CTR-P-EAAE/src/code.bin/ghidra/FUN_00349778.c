/**
 * FUN_00349778.c
 * Source line: 446337
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00349778(int *param_1,int param_2)

{
  *param_1 = param_2;
  if ((uint *)param_1[3] != NULL) {
    *(uint *)param_1[3] = (uint)(param_2 - param_1[2]) >> 3;
  }
  param_1[1] = *param_1;
  param_1[3] = 0;
  param_1[2] = *param_1;
  param_1[4] = 0;
  return;
}
