/**
 * FUN_0047f370.c
 * Source line: 651735
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_0047f370(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_0011fd10();
  iVar2 = FUN_00136490();
  if ((iVar2 == 0 || (uVar1 & 0x20000000) == 0) || ((uVar1 & 0x10000000) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}
