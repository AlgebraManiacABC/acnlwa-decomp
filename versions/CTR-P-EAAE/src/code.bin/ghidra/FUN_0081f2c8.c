/**
 * FUN_0081f2c8.c
 * Source line: 1230502
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 * FUN_0081f2c8(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)FUN_002fd108(8,*(undefined4 *)(param_1 + 4),4);
  FUN_002fd108(0xec,*(undefined4 *)(param_1 + 4),4);
  puVar2 = (undefined4 *)FUN_001db5b4();
  *puVar2 = &UNK_008f1de8;
  puVar2[0x39] = 0x3f800000;
  *(undefined1 *)(puVar2 + 0x3a) = 0xff;
  *puVar1 = puVar2;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined1 *)((int)puVar1 + 5) = 0;
  return puVar1;
}
