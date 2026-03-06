/**
 * FUN_002e9044.c
 * Source line: 383151
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_002e9044(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0020b280();
  *puVar1 = &UNK_008f3aa4;
  *(undefined1 *)(puVar1 + 0x1c) = 0;
  puVar1[0x1d] = 0;
  *(undefined1 *)(puVar1 + 0x1e) = 0xff;
  *(undefined1 *)((int)puVar1 + 0x79) = 0;
  return;
}
