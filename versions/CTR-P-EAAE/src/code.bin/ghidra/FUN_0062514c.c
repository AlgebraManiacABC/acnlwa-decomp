/**
 * FUN_0062514c.c
 * Source line: 938913
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0062514c(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0075e35c(DAT_0095362c + 0x1c0,0x60);
  if ((iVar1 == 0) || (uVar2 = FUN_0075e2fc(DAT_0095362c + 0x1c0), uVar2 < 4)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}
