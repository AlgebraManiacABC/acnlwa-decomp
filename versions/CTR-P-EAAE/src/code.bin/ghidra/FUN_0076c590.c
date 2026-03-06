/**
 * FUN_0076c590.c
 * Source line: 1129781
 * Body lines: 8
 */
#include "../../../include/types.h"

uint FUN_0076c590(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00536214();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = ((uint)*(byte *)(iVar1 + 1) << 0x1a) >> 0x1f;
  }
  return uVar2;
}
