/**
 * FUN_00347fbc.c
 * Source line: 444747
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00347fbc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,uint param_7)

{
  undefined4 local_24 [2];
  
  local_24[0] = FUN_00725d08();
  FUN_00348f2c(local_24,param_2,param_3,param_4,param_5,param_6,
               param_7 & 0xff | (param_7 & 0xff) << 0x10);
  return;
}
