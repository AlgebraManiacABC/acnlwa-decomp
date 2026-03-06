/**
 * FUN_0033e960.c
 * Source line: 438837
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0033e960(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0023bbe4();
  puVar1[0x1f] = &UNK_008f69c8;
  *puVar1 = &UNK_008f68a0;
  puVar1[0x42] = puVar1 + 0x44;
  puVar1[0x41] = &DAT_0090558c;
  puVar1[0x43] = 0x20;
  *(undefined1 *)(puVar1[0x42] + 0x1f) = 0;
  puVar1[0x41] = &DAT_00905120;
  *(undefined1 *)puVar1[0x42] = 0;
  puVar1[0x41] = &DAT_009048ec;
  puVar1[0x4c] = 0;
  return;
}
