/**
 * FUN_00164624.c
 * Source line: 179909
 * Body lines: 4
 */
#include "../../../include/types.h"

bool FUN_00164624(int param_1,uint *param_2)

{
  if (param_1 < 0x29) {
    *param_2 = (uint)*(byte *)((int)&PTR_LAB_00115682_1_008bca0c + param_1 * 0x90 + 2);
  }
  return param_1 < 0x29;
}
