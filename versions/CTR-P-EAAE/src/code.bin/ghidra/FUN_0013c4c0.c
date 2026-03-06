/**
 * FUN_0013c4c0.c
 * Source line: 148800
 * Body lines: 11
 */
#include "../../../include/types.h"

uint FUN_0013c4c0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint local_8;
  
  local_8 = param_4;
  iVar1 = FUN_00141a9c(param_1 + 4,&local_8,2);
  if (iVar1 == 0) {
    local_8 = 0x40;
  }
  else {
    local_8 &= 0xff;
  }
  return local_8;
}
