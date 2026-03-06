/**
 * FUN_00447548.c
 * Source line: 609472
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00447548(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_00426f3c();
  *puVar1 = &UNK_00900c58;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  iVar2 = FUN_00426354(puVar1 + 0x12);
  *(undefined4 *)(iVar2 + 0x14) = 0;
  return;
}
