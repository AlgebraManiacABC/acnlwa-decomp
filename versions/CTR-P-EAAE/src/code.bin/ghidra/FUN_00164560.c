/**
 * FUN_00164560.c
 * Source line: 179849
 * Body lines: 4
 */
#include "../../../include/types.h"

bool FUN_00164560(int param_1,int *param_2)

{
  if (param_1 < 0x29) {
    *param_2 = (int)*(short *)(&PTR_LAB_00115682_1_008bca0c + param_1 * 0x24);
  }
  return param_1 < 0x29;
}
