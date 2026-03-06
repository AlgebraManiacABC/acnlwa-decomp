/**
 * FUN_00320f70.c
 * Source line: 424143
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00320f70(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_001ff92c();
  *puVar1 = &UNK_008f48c0;
  iVar2 = FUN_00125e3c(puVar1 + 0x4c);
  *(undefined4 *)(iVar2 + 0x14c) = 0;
  *(undefined4 *)(iVar2 + 0x150) = 0;
  *(int *)(iVar2 + -0x114) = iVar2;
  return;
}
