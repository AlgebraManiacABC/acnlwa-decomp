/**
 * FUN_005d21cc.c
 * Source line: 882865
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_005d21cc(int param_1,int *param_2,int *param_3,uint param_4)

{
  if (param_4 < 4) {
    *param_2 = *(int *)(&DAT_00952d9c + param_4 * 4) + *(int *)(param_1 + 4);
    *param_3 = *(int *)(param_1 + 8) + *(int *)(&DAT_00952dac + param_4 * 4);
    return 1;
  }
  return 0;
}
