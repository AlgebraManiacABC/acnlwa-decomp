/**
 * FUN_0029b7c0.c
 * Source line: 340401
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0029b7c0(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_002f7604();
  *puVar1 = &UNK_008f08ac;
  iVar2 = FUN_00125e08(puVar1 + 0x39);
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined1 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x20) = 0;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  *(undefined1 *)(iVar2 + 0x28) = 1;
  *(undefined1 *)(iVar2 + 0x29) = 1;
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  return;
}
