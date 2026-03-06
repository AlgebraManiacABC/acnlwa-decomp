/**
 * FUN_0081ef0c.c
 * Source line: 1230307
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 * FUN_0081ef0c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)FUN_002fd108(8,*(undefined4 *)(param_1 + 4),4);
  FUN_002fd108(0xe4,*(undefined4 *)(param_1 + 4),4);
  puVar2 = (undefined4 *)FUN_001db5b4();
  *puVar2 = &UNK_008ef874;
  *puVar1 = puVar2;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined1 *)((int)puVar1 + 5) = 0;
  return puVar1;
}
