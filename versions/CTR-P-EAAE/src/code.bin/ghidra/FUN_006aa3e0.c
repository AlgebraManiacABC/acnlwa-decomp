/**
 * FUN_006aa3e0.c
 * Source line: 1006007
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_006aa3e0(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_00601a20();
  *puVar1 = &UNK_0090af70;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0x3f800000;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  iVar2 = FUN_005e9e58(puVar1 + 0x1f);
  *(undefined1 *)(iVar2 + 4) = 0;
  return;
}
