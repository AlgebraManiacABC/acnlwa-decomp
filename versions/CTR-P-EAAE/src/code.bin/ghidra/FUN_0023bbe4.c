/**
 * FUN_0023bbe4.c
 * Source line: 292003
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0023bbe4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_005dd69c();
  puVar2 = (undefined4 *)FUN_005dd230(iVar1 + 0x7c,iVar1);
  puVar2[0x1d] = 0;
  *puVar2 = &UNK_008ee650;
  puVar2[-0x1f] = &UNK_008ee528;
  puVar2[0x1e] = 0;
  puVar2[0x20] = 0;
  puVar2[0x1f] = param_2;
  *(undefined1 *)(puVar2 + 0x21) = 0;
  return;
}
