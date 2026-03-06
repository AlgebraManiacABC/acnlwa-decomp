/**
 * FUN_001f7dac.c
 * Source line: 257869
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 * FUN_001f7dac(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_002fd108(0x78,*(undefined4 *)(param_1 + 4),4);
  *(undefined1 *)(puVar1 + 1) = 2;
  *(undefined1 *)((int)puVar1 + 5) = 0;
  *puVar1 = &UNK_008ecf50;
  puVar1 = (undefined4 *)FUN_0020b280(puVar1 + 2);
  *puVar1 = &UNK_008ed8b4;
  return puVar1 + -2;
}
