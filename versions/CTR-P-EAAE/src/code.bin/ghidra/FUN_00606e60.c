/**
 * FUN_00606e60.c
 * Source line: 921738
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00606e60(void)

{
  puRam009503cc = (undefined4 *)FUN_00521a8c();
  *puRam009503cc = &UNK_008f7dc4;
  *(undefined1 *)((int)puRam009503cc + 0x13) = 0;
  *(undefined1 *)(puRam009503cc + 5) = 0;
  uRam009503bd = 1;
  uRam009503be = 0;
  return;
}
