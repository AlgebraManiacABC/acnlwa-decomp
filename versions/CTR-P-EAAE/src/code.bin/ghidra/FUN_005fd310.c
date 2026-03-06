/**
 * FUN_005fd310.c
 * Source line: 914398
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_005fd310(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00601a20();
  *puVar1 = &PTR_LAB_0090a5a8;
  *(undefined1 *)(puVar1 + 0x18) = 4;
  puVar1[0x19] = 0;
  *(undefined2 *)(puVar1 + 0x1a) = 0;
  puVar1[0x1b] = 0x7fffffff;
  puVar1[0x1c] = 0xffffffff;
  *(undefined1 *)(puVar1 + 0x1d) = 0;
  puVar1[0x1e] = 0;
  return;
}
