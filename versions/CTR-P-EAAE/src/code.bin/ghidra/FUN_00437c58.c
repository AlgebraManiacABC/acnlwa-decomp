/**
 * FUN_00437c58.c
 * Source line: 601658
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00437c58(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_00426f3c();
  *puVar1 = &UNK_0090081c;
  puVar1[0x10] = 0;
  iVar2 = FUN_00426354(puVar1 + 0x11);
  *(undefined4 *)(iVar2 + 0x14) = 0xe7e3ffff;
  return;
}
