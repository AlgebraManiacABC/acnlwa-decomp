/**
 * FUN_00768cc8.c
 * Source line: 1126515
 * Body lines: 8
 */
#include "../../../include/types.h"

uint FUN_00768cc8(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00536214();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = ((uint)*(byte *)(iVar1 + 1) << 0x1b) >> 0x1f;
  }
  return uVar2;
}
