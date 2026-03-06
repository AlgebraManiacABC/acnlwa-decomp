/**
 * FUN_0073f670.c
 * Source line: 1097976
 * Body lines: 11
 */
#include "../../../include/types.h"

uint FUN_0073f670(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint local_8;
  
  local_8 = param_4;
  iVar1 = FUN_00141a9c(param_1 + 0x18,&local_8,0);
  if (iVar1 == 0) {
    local_8 = 1;
  }
  else {
    local_8 &= 0xff;
  }
  return local_8;
}
