/**
 * FUN_004388d8.c
 * Source line: 602077
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_004388d8(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_00426f3c();
  *puVar1 = &UNK_00900874;
  puVar1[0x10] = 0;
  iVar2 = FUN_00426354(puVar1 + 0x11);
  *(undefined4 *)(iVar2 + 0x14) = 0xe7e3ffff;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined4 *)(iVar2 + 0x20) = 0;
  return;
}
