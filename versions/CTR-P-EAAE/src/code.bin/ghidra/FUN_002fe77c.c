/**
 * FUN_002fe77c.c
 * Source line: 396684
 * Body lines: 10
 */
#include "../../../include/types.h"

uint FUN_002fe77c(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_002fccdc();
  if (iVar1 == 10) {
    uVar2 = (*(ushort *)(param_1 + 2) & 0x200) >> 9;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
