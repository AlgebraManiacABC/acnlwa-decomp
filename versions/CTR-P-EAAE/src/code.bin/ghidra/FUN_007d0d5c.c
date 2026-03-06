/**
 * FUN_007d0d5c.c
 * Source line: 1177474
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_007d0d5c(undefined4 param_1,uint3 *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int local_10;
  
  local_10 = param_4;
  iVar1 = FUN_00300904();
  if (iVar1 != 0) {
    local_10 = (uint)*param_2 << 8;
    FUN_006249b0(0x41,param_1,&local_10,4);
  }
  return;
}
