/**
 * FUN_006aa9d0.c
 * Source line: 1006239
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_006aa9d0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00521a8c();
  *puVar1 = &UNK_008f8ba0;
  puVar1 = (undefined4 *)FUN_001324a8(puVar1 + 5);
  puVar1[3] = 0;
  *puVar1 = &UNK_0090afc0;
  *(undefined1 *)(puVar1 + 4) = 0;
  *(undefined1 *)((int)puVar1 + 0x11) = 0;
  *(undefined1 *)((int)puVar1 + 0x12) = 0;
  *(undefined1 *)((int)puVar1 + 0x13) = 0;
  return;
}
