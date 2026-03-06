/**
 * FUN_005c6850.c
 * Source line: 875625
 * Body lines: 10
 */
#include "../../../include/types.h"

uint FUN_005c6850(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_005c33d0(4,0);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = ((uint)*(byte *)(iVar1 + 0x177) << 0x1c) >> 0x1f;
  }
  return uVar2;
}
