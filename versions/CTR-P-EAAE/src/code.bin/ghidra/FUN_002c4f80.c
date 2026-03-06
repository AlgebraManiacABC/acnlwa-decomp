/**
 * FUN_002c4f80.c
 * Source line: 364301
 * Body lines: 8
 */
#include "../../../include/types.h"

int FUN_002c4f80(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_002fd108(0x98,*(undefined4 *)(param_1 + 4),4);
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined1 *)((int)puVar1 + 5) = 0;
  *puVar1 = &UNK_008f2294;
  iVar2 = FUN_002d2a4c(puVar1 + 2);
  return iVar2 + -8;
}
