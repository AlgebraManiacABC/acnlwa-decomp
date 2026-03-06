/**
 * FUN_0014184c.c
 * Source line: 154029
 * Body lines: 10
 */
#include "../../../include/types.h"

uint FUN_0014184c(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint local_8;
  
  local_8 = param_4;
  iVar1 = FUN_00141a9c(param_1 + 0x14,&local_8,0x11);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = local_8 & 1;
  }
  return uVar2;
}
