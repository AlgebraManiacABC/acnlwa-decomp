/**
 * FUN_0062ac50.c
 * Source line: 943601
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0062ac50(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_0050c988();
  *puVar1 = &UNK_0090ac28;
  iVar2 = FUN_00301d0c(puVar1 + 2,&UNK_00626dd8,0x18,4);
  iVar2 = FUN_00301d0c(iVar2 + 0x60,FUN_0061a7f4,0x10,4);
  iVar2 = FUN_00301d0c(iVar2 + 0x50,&UNK_0062a500,0x10,4);
  *(undefined4 *)(iVar2 + 0x40) = 0xfffffffd;
  *(undefined4 *)(iVar2 + 0x44) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x48) = 0xfffffffd;
  *(undefined4 *)(iVar2 + 0x4c) = 0xffffffff;
  *(undefined1 *)(iVar2 + 0x50) = 0;
  return;
}
