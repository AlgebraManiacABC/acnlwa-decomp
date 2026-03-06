/**
 * FUN_00439670.c
 * Source line: 602716
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_00439670(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_00426f3c();
  *puVar1 = &UNK_00900924;
  puVar1[0x10] = 0;
  iVar2 = FUN_00426354(puVar1 + 0x11);
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  return;
}
