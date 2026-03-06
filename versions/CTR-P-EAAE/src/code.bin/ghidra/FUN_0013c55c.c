/**
 * FUN_0013c55c.c
 * Source line: 148846
 * Body lines: 11
 */
#include "../../../include/types.h"

uint FUN_0013c55c(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint local_8;
  
  local_8 = param_4;
  iVar1 = FUN_00141a9c(param_1 + 4,&local_8,1);
  if (iVar1 == 0) {
    local_8 = 0x60;
  }
  else {
    local_8 &= 0xff;
  }
  return local_8;
}
