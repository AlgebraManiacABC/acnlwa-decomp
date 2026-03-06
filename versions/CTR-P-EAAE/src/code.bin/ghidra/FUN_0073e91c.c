/**
 * FUN_0073e91c.c
 * Source line: 1097161
 * Body lines: 10
 */
#include "../../../include/types.h"

uint FUN_0073e91c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int local_8;
  
  local_8 = param_4;
  iVar1 = FUN_00141a9c(param_1,&local_8,2);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)(local_8 << 0x10) >> 0x18;
  }
  return uVar2;
}
