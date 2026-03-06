/**
 * FUN_007d141c.c
 * Source line: 1177918
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_007d141c(undefined4 param_1,uint *param_2)

{
  int iVar1;
  undefined1 local_40;
  uint auStack_3f [12];
  
  iVar1 = FUN_00300904();
  if (iVar1 != 0) {
    local_40 = 7;
    __rt_memcpy(auStack_3f,param_2,0x30);
    FUN_006249b0(0x41,param_1,&local_40,0x31);
  }
  return;
}
