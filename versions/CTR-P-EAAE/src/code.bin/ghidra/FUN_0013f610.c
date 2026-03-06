/**
 * FUN_0013f610.c
 * Source line: 151796
 * Body lines: 10
 */
#include "../../../include/types.h"

uint FUN_0013f610(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int local_8;
  
  local_8 = param_4;
  iVar1 = FUN_00141a9c(param_1 + 8,&local_8,0);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)(local_8 << 0x10) >> 0x18;
  }
  return uVar2;
}
