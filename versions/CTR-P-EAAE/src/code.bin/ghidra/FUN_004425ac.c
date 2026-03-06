/**
 * FUN_004425ac.c
 * Source line: 607388
 * Body lines: 7
 */
#include "../../../include/types.h"

int FUN_004425ac(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_00426f3c();
  *puVar1 = &UNK_00900b58;
  puVar1[0x10] = 0;
  iVar2 = FUN_00426354(puVar1 + 0x11);
  return iVar2 + -0x44;
}
