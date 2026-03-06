/**
 * FUN_00440890.c
 * Source line: 606477
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00440890(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_00426f3c();
  *puVar1 = &UNK_00900a1c;
  iVar2 = FUN_00426354(puVar1 + 0x10);
  *(undefined1 *)(iVar2 + 0x14) = 0;
  *(undefined1 *)(iVar2 + 0x15) = 0;
  return;
}
