/**
 * FUN_003357cc.c
 * Source line: 436150
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_003357cc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0023bbe4();
  puVar1[0x1f] = &UNK_008f63ac;
  *puVar1 = &UNK_008f6284;
  puVar1[0x42] = puVar1 + 0x44;
  puVar1[0x41] = &DAT_0090558c;
  puVar1[0x43] = 0x20;
  *(undefined1 *)(puVar1[0x42] + 0x1f) = 0;
  puVar1[0x41] = &DAT_00905120;
  *(undefined1 *)puVar1[0x42] = 0;
  puVar1[0x41] = &DAT_009048ec;
  return;
}
