/**
 * FUN_0032f808.c
 * Source line: 433369
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0032f808(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_00521a8c();
  *puVar1 = &UNK_008f5910;
  iVar2 = FUN_005673c8(puVar1 + 5);
  iVar2 = FUN_004f0d90(iVar2 + 8);
  *(undefined4 *)(iVar2 + 8) = 0;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined1 *)(iVar2 + 0x24) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined4 *)(iVar2 + 0x20) = 0;
  return;
}
