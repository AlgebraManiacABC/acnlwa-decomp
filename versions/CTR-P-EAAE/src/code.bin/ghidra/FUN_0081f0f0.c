/**
 * FUN_0081f0f0.c
 * Source line: 1230405
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 * FUN_0081f0f0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)FUN_002fd108(8,*(undefined4 *)(param_1 + 4),4);
  FUN_002fd108(0xe4,*(undefined4 *)(param_1 + 4),4);
  puVar2 = (undefined4 *)FUN_001db5b4();
  *puVar2 = &UNK_008f0e94;
  *(undefined1 *)((int)puVar2 + 0xe1) = 1;
  *puVar1 = puVar2;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined1 *)((int)puVar1 + 5) = 0;
  return puVar1;
}
