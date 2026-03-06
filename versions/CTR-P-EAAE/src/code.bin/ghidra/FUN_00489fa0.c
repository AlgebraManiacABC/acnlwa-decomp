/**
 * FUN_00489fa0.c
 * Source line: 660320
 * Body lines: 5
 */
#include "../../../include/types.h"

int FUN_00489fa0(int param_1,undefined1 *param_2,int param_3,uint param_4)

{
  if (((param_2 != NULL && param_3 != 0) && (param_1 == 2)) && (0xf < param_4)) {
    FUN_007b1a44(param_3,param_4,"%d.%d.%d.%d",*param_2,param_2[1],param_2[2],param_2[3]);
    return param_3;
  }
  return 0;
}
