/**
 * FUN_0020b280.c
 * Source line: 267685
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_0020b280(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_0020af18();
  *puVar1 = &UNK_008f8d88;
  iVar2 = FUN_00301d0c(puVar1 + 0x11,&UNK_00131800,4,1);
  iVar2 = FUN_00301d0c(iVar2 + 4,&UNK_001287a8,0x14,1);
  *(undefined4 *)(iVar2 + 0x14) = 0xffffffff;
  *(undefined **)(iVar2 + -0x48) = &UNK_008ed874;
  *(undefined1 *)(iVar2 + 0x18) = 0;
  *(undefined4 *)(iVar2 + 0x1c) = 0x44fa0000;
  *(undefined4 *)(iVar2 + 0x20) = 0x44fa0000;
  *(undefined4 *)(iVar2 + 0x24) = 0x44fa0000;
  *(undefined4 *)(iVar2 + -0x44) = 5;
  return iVar2 + -0x48;
}
