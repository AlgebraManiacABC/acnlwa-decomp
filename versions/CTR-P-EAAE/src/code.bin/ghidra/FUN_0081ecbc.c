/**
 * FUN_0081ecbc.c
 * Source line: 1230189
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 * FUN_0081ecbc(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)FUN_002fd108(8,*(undefined4 *)(param_1 + 4),4);
  FUN_002fd108(0xe4,*(undefined4 *)(param_1 + 4),4);
  puVar2 = (undefined4 *)FUN_001db5b4();
  *puVar2 = &UNK_008ee7bc;
  *(undefined1 *)((int)puVar2 + 0xe1) = 0xff;
  *puVar1 = puVar2;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined1 *)((int)puVar1 + 5) = 0;
  return puVar1;
}
