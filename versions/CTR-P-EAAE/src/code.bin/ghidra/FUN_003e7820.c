/**
 * FUN_003e7820.c
 * Source line: 559897
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_003e7820(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_003e32e0();
  *puVar1 = &UNK_008fef68;
  iVar2 = FUN_00450d54(puVar1 + 0xee);
  iVar2 = FUN_00450d54(iVar2 + 0x28);
  *(undefined4 *)(iVar2 + 0x30) = 0;
  *(undefined4 *)(iVar2 + 0x34) = 0;
  return;
}
