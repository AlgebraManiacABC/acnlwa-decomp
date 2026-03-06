/**
 * FUN_00769820.c
 * Source line: 1127126
 * Body lines: 10
 */
#include "../../../include/types.h"

uint FUN_00769820(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00536214();
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = ((uint)*(byte *)(iVar1 + 2) << 0x19) >> 0x1f;
  }
  return uVar2;
}
