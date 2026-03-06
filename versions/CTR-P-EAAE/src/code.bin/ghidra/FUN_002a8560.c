/**
 * FUN_002a8560.c
 * Source line: 347353
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_002a8560(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_006e47a0();
  *(undefined1 *)((int)puVar1 + 0x66) = 0;
  *puVar1 = &UNK_008f1078;
  puVar1[0x1a] = param_2;
  *(undefined1 *)(puVar1 + 0x1b) = 1;
  return;
}
