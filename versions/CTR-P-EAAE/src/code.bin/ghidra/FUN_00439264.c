/**
 * FUN_00439264.c
 * Source line: 602488
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00439264(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_0045f438();
  *puVar1 = &UNK_009008b4;
  iVar2 = FUN_0044cd14(puVar1 + 6);
  *(undefined1 *)(iVar2 + 0x18) = 0xfd;
  *(undefined4 *)(iVar2 + 0x1c) = 2000;
  *(undefined4 *)(iVar2 + 0x20) = 0;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  *(undefined1 *)(iVar2 + 0x28) = 0;
  *(undefined1 *)(iVar2 + 0x29) = 0;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  *(undefined4 *)(iVar2 + 0x34) = 0;
  return;
}
