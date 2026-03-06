/**
 * FUN_00335154.c
 * Source line: 435868
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00335154(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_001ff92c();
  *puVar1 = &UNK_008f4844;
  iVar2 = FUN_00125e3c(puVar1 + 0x4c);
  *(undefined4 *)(iVar2 + 0x14c) = 0;
  *(undefined4 *)(iVar2 + 0x150) = 0;
  *(undefined4 *)(iVar2 + 0x154) = 0;
  *(undefined4 *)(iVar2 + 0x158) = 0;
  *(undefined4 *)(iVar2 + 0x15c) = 0;
  *(int *)(iVar2 + -0x114) = iVar2;
  *(undefined **)(iVar2 + -0x130) = &UNK_008f61a8;
  *(undefined1 *)(iVar2 + 0x160) = 2;
  return;
}
