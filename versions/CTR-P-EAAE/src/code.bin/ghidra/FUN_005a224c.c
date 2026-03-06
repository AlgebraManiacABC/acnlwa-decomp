/**
 * FUN_005a224c.c
 * Source line: 850878
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_005a224c(void)

{
  int iVar1;
  
  iVar1 = FUN_005a0ef8();
  if (iVar1 != -1) {
    iVar1 *= 0x16;
    FUN_005a0f5c(iVar1 + 0x9b4264);
    FUN_005a2438(iVar1 + 0x9b4264);
    *(undefined1 *)(iVar1 + 0x9b4274) = 0;
    *(undefined1 *)(iVar1 + 0x9b4275) = 0;
  }
  return;
}
