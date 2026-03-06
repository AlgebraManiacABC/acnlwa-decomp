/**
 * FUN_00453b60.c
 * Source line: 618409
 * Body lines: 11
 */
#include "../../../include/types.h"

uint FUN_00453b60(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint local_10;
  
  if ((iRam00974a74 - 0x100000U < 0x3ff00000) &&
     (local_10 = param_4, uVar1 = FUN_00736300(iRam00974a74,&local_10,param_1,param_2),
     (uVar1 & 0x80000000) == 0)) {
    local_10 &= 0xff;
  }
  else {
    local_10 = 0xfd;
  }
  return local_10;
}
