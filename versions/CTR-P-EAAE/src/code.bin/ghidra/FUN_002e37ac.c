/**
 * FUN_002e37ac.c
 * Source line: 379544
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_002e37ac(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_001ff92c();
  *puVar1 = &UNK_008f369c;
  puVar1[0x4c] = 0;
  iVar2 = FUN_00125e3c(puVar1 + 0x4d);
  iVar2 = FUN_00125aec(iVar2 + 0x14c);
  *(undefined4 *)(iVar2 + 0x28) = 0;
  *(undefined1 *)(iVar2 + 0x2c) = 0;
  *(undefined1 *)(iVar2 + 0x2d) = 0;
  *(int *)(iVar2 + -0x264) = iVar2 + -0x14c;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  return;
}
