/**
 * FUN_00754964.c
 * Source line: 1110222
 * Body lines: 8
 */
#include "../../../include/types.h"

ushort FUN_00754964(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = *(ushort *)(*(int *)(param_1 + 0xc) + 0x14);
  uVar2 = uVar1 & 0x10;
  if ((uVar1 & 0x10) != 0) {
    uVar2 = 1;
  }
  return uVar2;
}
