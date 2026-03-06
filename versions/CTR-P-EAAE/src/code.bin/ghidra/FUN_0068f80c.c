/**
 * FUN_0068f80c.c
 * Source line: 995524
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0068f80c(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_00521a8c();
  *puVar1 = &UNK_008f87cc;
  iVar2 = FUN_004f2198(puVar1 + 5);
  iVar2 = FUN_004f2198(iVar2 + 200);
  *(undefined4 *)(iVar2 + 200) = 0;
  *(undefined4 *)(iVar2 + 0xcc) = 0;
  iVar2 = FUN_00301d0c(iVar2 + 0x160,&UNK_004d9684,0x10,6);
  *(undefined4 *)(iVar2 + 0xc0) = 0;
  iVar2 = FUN_0022ba54(iVar2 + 0xc4);
  *(undefined1 *)(iVar2 + 0x3c) = 0;
  return;
}
