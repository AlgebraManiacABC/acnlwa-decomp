/**
 * FUN_001df3d4.c
 * Source line: 245750
 * Body lines: 10
 */
#include "../../../include/types.h"

int FUN_001df3d4(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_002ff8b0(4);
  if (uVar1 < 4) {
    iVar2 = param_1 + (short)uVar1 * 0x1b88 + 0x2058;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}
