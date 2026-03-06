/**
 * FUN_006e9b7c.c
 * Source line: 1045304
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_006e9b7c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined2 local_10 [2];
  
  DAT_009537c8 = *(float *)(param_2 + 0x518);
  DAT_009537cc = DAT_009537c8 * 0.1;
  local_10[0] = 0;
  FUN_006e7204(param_1,0x40c00000,param_2,3,param_3,param_4,local_10,param_5,param_6,&DAT_009537c8);
  return;
}
