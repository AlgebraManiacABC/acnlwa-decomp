/**
 * FUN_007d0bf4.c
 * Source line: 1177386
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_007d0bf4(undefined4 param_1,uint *param_2)

{
  int iVar1;
  undefined1 local_40;
  uint auStack_3f [12];
  
  iVar1 = FUN_00300904();
  if (iVar1 != 0) {
    local_40 = 0x1f;
    __rt_memcpy(auStack_3f,param_2,0x2c);
    FUN_006249b0(0x41,param_1,&local_40,0x2d);
  }
  return;
}
