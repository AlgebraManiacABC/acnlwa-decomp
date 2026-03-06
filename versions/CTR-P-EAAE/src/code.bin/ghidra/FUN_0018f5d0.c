/**
 * FUN_0018f5d0.c
 * Source line: 203997
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0018f5d0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00521a8c();
  *puVar1 = &UNK_008eacbc;
  puVar1 = (undefined4 *)FUN_005dd69c(puVar1 + 6);
  *puVar1 = &UNK_008f97ac;
  *(undefined1 *)(puVar1 + 0x1f) = 0;
  puVar1[0x20] = 0;
  *(undefined1 *)(puVar1 + 0x21) = 0;
  return;
}
