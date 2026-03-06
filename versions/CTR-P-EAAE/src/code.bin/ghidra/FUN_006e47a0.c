/**
 * FUN_006e47a0.c
 * Source line: 1042257
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_006e47a0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0057ba68();
  *puVar1 = &UNK_008f9530;
  puVar1 = (undefined4 *)FUN_001324a8(puVar1 + 0x12);
  puVar1[3] = 0;
  *puVar1 = &UNK_0090b134;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined2 *)(puVar1 + 7) = 0;
  return;
}
