/**
 * FUN_006eda58.c
 * Source line: 1047117
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_006eda58(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined2 local_10 [2];
  
  DAT_009537c8 = *(float *)(param_2 + 0x510);
  DAT_009537cc = DAT_009537c8 * 0.1;
  local_10[0] = 0;
  FUN_006e7204(param_1,0x40c00000,param_2,8,param_3,param_4,local_10,param_5,param_6,&DAT_009537c8);
  return;
}
