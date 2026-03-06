/**
 * FUN_006ed328.c
 * Source line: 1046854
 * Body lines: 8
 */
#include "../../../include/types.h"

bool FUN_006ed328(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined2 local_10 [2];
  
  local_10[0] = 0;
  iVar1 = FUN_006e7204(param_1,0x40c00000,param_2,0xb,param_3,param_5,local_10,param_6,0,param_7);
  if (iVar1 != 0) {
    *(undefined4 *)(param_2 + 0x2c) = param_4;
  }
  return iVar1 != 0;
}
