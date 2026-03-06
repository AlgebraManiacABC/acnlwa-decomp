/**
 * FUN_0071cb68.c
 * Source line: 1074623
 * Body lines: 6
 */
#include "../../../include/types.h"

uint FUN_0071cb68(int param_1)

{
  int local_10;
  int local_c [2];
  
  local_10 = 0;
  local_c[0] = 0;
  FUN_003171b4(&local_10,local_c,param_1 + 0x14);
  return local_c[0] + local_10 * 0x100 & 0xffff;
}
