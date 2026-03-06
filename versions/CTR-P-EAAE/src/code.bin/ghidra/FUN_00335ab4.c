/**
 * FUN_00335ab4.c
 * Source line: 436245
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00335ab4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_006e47a0();
  *puVar1 = &UNK_008f8158;
  *(undefined1 *)((int)puVar1 + 0x66) = 0;
  puVar1 = (undefined4 *)FUN_0023bbe4(puVar1 + 0x1a,puVar1);
  puVar1[0x1f] = &UNK_008f65b0;
  *puVar1 = &UNK_008f6488;
  puVar1[-0x1a] = &UNK_008f63ec;
  return;
}
