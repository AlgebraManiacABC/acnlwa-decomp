/**
 * FUN_00386a5c.c
 * Source line: 492058
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00386a5c(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int local_c;
  undefined1 local_8 [4];
  
  if (param_3 == 0) {
    param_1 = 0;
  }
  local_8[0] = 1;
  if (param_3 != 0) {
    local_c = param_3;
    FUN_003b7b2c(param_1 + 0x10,param_2,&local_c,param_4,local_8);
  }
  return;
}
