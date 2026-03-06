/**
 * FUN_001c0728.c
 * Source line: 227593
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_001c0728(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_0020af18();
  *puVar1 = &UNK_008f8e08;
  iVar2 = FUN_00301d0c(puVar1 + 0x11,&UNK_00131800,4,3);
  iVar2 = FUN_00301d0c(iVar2 + 0xc,&UNK_001287a8,0x14,3);
  *(undefined **)(iVar2 + -0x50) = &UNK_008ebd5c;
  *(undefined1 *)(iVar2 + 0x3c) = 0;
  return;
}
