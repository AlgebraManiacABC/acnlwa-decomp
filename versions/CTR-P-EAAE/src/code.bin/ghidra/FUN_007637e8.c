/**
 * FUN_007637e8.c
 * Source line: 1122390
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_007637e8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (((int)((uint)*(byte *)(param_1 + 0x171) << 0x1a) < 0) &&
     (iVar1 = FUN_004e1768(&DAT_009c8fd4,0), uVar2 = 0, iVar1 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}
