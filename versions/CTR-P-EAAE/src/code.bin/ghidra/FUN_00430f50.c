/**
 * FUN_00430f50.c
 * Source line: 597363
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00430f50(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00426f3c();
  puVar1[0x10] = 0;
  *puVar1 = &UNK_00900630;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 5000;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  *(undefined1 *)(puVar1 + 0x18) = 0;
  *(undefined1 *)((int)puVar1 + 0x61) = 0;
  *(undefined1 *)((int)puVar1 + 0x62) = 0;
  return;
}
