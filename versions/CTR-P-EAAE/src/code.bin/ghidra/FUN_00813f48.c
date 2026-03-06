/**
 * FUN_00813f48.c
 * Source line: 1222407
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00813f48(int param_1)

{
  undefined4 *puVar1;
  
  FUN_002fd108(0x2c,*(undefined4 *)(param_1 + 4),4);
  puVar1 = (undefined4 *)FUN_00585c5c();
  puVar1[8] = 0x10000a5;
  *(undefined1 *)(puVar1 + 9) = 0;
  *(undefined1 *)((int)puVar1 + 0x25) = 0;
  *(undefined1 *)((int)puVar1 + 0x26) = 3;
  *puVar1 = &UNK_009064a8;
  return;
}
