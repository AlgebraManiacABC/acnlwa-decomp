/**
 * FUN_00438360.c
 * Source line: 601916
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00438360(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_00426f3c();
  *puVar1 = &UNK_0090084c;
  iVar2 = FUN_00426354(puVar1 + 0x17);
  *(undefined4 *)(iVar2 + 0x1c) = 0xe7e3ffff;
  *(undefined1 *)(iVar2 + -4) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined1 *)(iVar2 + 0x18) = 0;
  return;
}
