/**
 * FUN_005a2534.c
 * Source line: 851021
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_005a2534(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = iVar2 * 0x16;
    if (*(char *)(iVar1 + 0x9b4275) != '\0') {
      FUN_005a0f5c(iVar1 + 0x9b4264);
      FUN_005a2438(iVar1 + 0x9b4264);
      *(undefined1 *)(iVar1 + 0x9b4274) = 0;
      *(undefined1 *)(iVar1 + 0x9b4275) = 0;
    }
    iVar2 += 1;
  } while (iVar2 < 0x20);
  return;
}
