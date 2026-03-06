/**
 * FUN_001287d8.c
 * Source line: 129883
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_001287d8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_001324a8();
  *puVar1 = &UNK_008f4a84;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  puVar1[5] = 0xffffffff;
  return;
}
