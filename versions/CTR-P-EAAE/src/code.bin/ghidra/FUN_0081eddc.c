/**
 * FUN_0081eddc.c
 * Source line: 1230247
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 * FUN_0081eddc(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)FUN_002fd108(8,*(undefined4 *)(param_1 + 4),4);
  FUN_002fd108(0xec,*(undefined4 *)(param_1 + 4),4);
  puVar2 = (undefined4 *)FUN_001db5b4();
  *puVar2 = &UNK_008ee810;
  *(undefined2 *)((int)puVar2 + 0xe2) = 0;
  *(undefined2 *)(puVar2 + 0x39) = 0;
  *(undefined2 *)((int)puVar2 + 0xe6) = 3;
  *(undefined2 *)(puVar2 + 0x3a) = 3;
  *puVar1 = puVar2;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined1 *)((int)puVar1 + 5) = 0;
  return puVar1;
}
