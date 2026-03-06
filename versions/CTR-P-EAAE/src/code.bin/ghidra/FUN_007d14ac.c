/**
 * FUN_007d14ac.c
 * Source line: 1177953
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_007d14ac(undefined4 param_1,uint *param_2)

{
  int iVar1;
  undefined1 local_38;
  uint auStack_37 [10];
  
  iVar1 = FUN_00300904();
  if (iVar1 != 0) {
    local_38 = 0x17;
    __rt_memcpy(auStack_37,param_2,0x2a);
    FUN_006249b0(0x41,param_1,&local_38,0x2b);
  }
  return;
}
