/**
 * FUN_001f7bec.c
 * Source line: 257786
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 * FUN_001f7bec(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_002fd108(0x78,*(undefined4 *)(param_1 + 4),4);
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)((int)puVar1 + 5) = 0;
  *puVar1 = &UNK_008ecf2c;
  puVar1 = (undefined4 *)FUN_0020b280(puVar1 + 2);
  *puVar1 = &UNK_008ed834;
  return puVar1 + -2;
}
