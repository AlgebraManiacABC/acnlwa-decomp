/**
 * FUN_005d2398.c
 * Source line: 882966
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_005d2398(int param_1,undefined4 param_2,uint param_3)

{
  if (param_3 < 8) {
    FUN_006a5f0c(param_2,(&DAT_00952dbc)[param_3] + *(int *)(param_1 + 4),
                 *(int *)(&DAT_00952ddc + param_3 * 4) + *(int *)(param_1 + 8));
    return 1;
  }
  return 0;
}
