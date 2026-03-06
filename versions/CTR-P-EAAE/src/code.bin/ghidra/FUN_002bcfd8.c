/**
 * FUN_002bcfd8.c
 * Source line: 358307
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_002bcfd8(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_0020af18();
  *puVar1 = &UNK_008f8d88;
  iVar2 = FUN_00301d0c(puVar1 + 0x11,&UNK_00131800,4,1);
  iVar2 = FUN_00301d0c(iVar2 + 4,&UNK_001287a8,0x14,1);
  *(undefined **)(iVar2 + -0x48) = &UNK_008f1d8c;
  *(undefined1 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0x44fa0000;
  *(undefined4 *)(iVar2 + 0x1c) = 0x44fa0000;
  *(undefined4 *)(iVar2 + 0x20) = 0x44fa0000;
  *(undefined4 *)(iVar2 + -0x44) = 7;
  return;
}
