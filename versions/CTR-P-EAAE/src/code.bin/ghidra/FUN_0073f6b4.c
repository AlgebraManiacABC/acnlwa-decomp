/**
 * FUN_0073f6b4.c
 * Source line: 1098009
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_0073f6b4(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_8;
  
  local_8 = param_4;
  iVar1 = FUN_00141a9c(param_1 + 0x18,&local_8,0);
  uVar2 = 0;
  if ((iVar1 != 0) && (uVar2 = 1, (uint)(local_8 << 0x10) >> 0x18 != 1)) {
    uVar2 = 0;
  }
  return uVar2;
}
