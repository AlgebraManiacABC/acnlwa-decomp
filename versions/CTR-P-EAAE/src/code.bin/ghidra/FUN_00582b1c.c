/**
 * FUN_00582b1c.c
 * Source line: 827777
 * Body lines: 8
 */
#include "../../../include/types.h"

ushort FUN_00582b1c(uint param_1,uint param_2,uint param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = FUN_005826e8(param_4);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = *(ushort *)(iVar2 + (param_3 & 1) * 0x20 + (param_2 & 0xf) * 2) >> (param_1 & 0xf) & 1;
  }
  return uVar1;
}
