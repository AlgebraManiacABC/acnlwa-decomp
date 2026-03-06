/**
 * FUN_00265cb8.c
 * Source line: 312383
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00265cb8(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_00521a8c();
  *puVar1 = &UNK_008ef138;
  iVar2 = FUN_005673c8(puVar1 + 5);
  iVar2 = FUN_004f0d90(iVar2 + 0x3c);
  *(undefined1 *)(iVar2 + 8) = 0;
  *(undefined1 *)(iVar2 + 9) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined2 *)(iVar2 + 0x30) = 0xff;
  *(undefined4 *)(iVar2 + 0x34) = 0;
  return;
}
