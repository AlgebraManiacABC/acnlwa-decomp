/**
 * FUN_00734bf8.c
 * Source line: 1090381
 * Body lines: 8
 */
#include "../../../include/types.h"

int FUN_00734bf8(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(iRam00974a74 + 0x30);
  uVar1 = (uint)*(byte *)(param_1 + 0x29) * iVar2 * iVar2;
  if ((uVar1 & 7) != 0) {
    uVar1 += 8 - (uVar1 & 7);
  }
  return (uVar1 >> 3) + iVar2 * 4 + 4;
}
