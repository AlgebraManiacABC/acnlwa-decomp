/**
 * FUN_00116ea4.c
 * Source line: 115920
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00116ea4(uint *param_1,uint param_2,int param_3)

{
  *param_1 = param_2;
  if (param_3 != 0) {
    param_1[1] = (1 << (param_2 & 0xff)) - 1;
    param_1[2] = param_2;
    return;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}
