/**
 * FUN_004e09fc.c
 * Source line: 725273
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_004e09fc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_001324a8();
  puVar1[3] = 0;
  puVar1[6] = 0x8056;
  *puVar1 = &UNK_0090286c;
  puVar1[4] = 0;
  puVar1[5] = 5;
  *(undefined2 *)(puVar1 + 7) = 0;
  *(undefined2 *)((int)puVar1 + 0x1e) = 0;
  *(undefined2 *)(puVar1 + 8) = 0;
  return;
}
