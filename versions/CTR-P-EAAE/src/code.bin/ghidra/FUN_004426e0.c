/**
 * FUN_004426e0.c
 * Source line: 607422
 * Body lines: 7
 */
#include "../../../include/types.h"

int FUN_004426e0(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_00426f3c();
  *puVar1 = &UNK_00900b80;
  puVar1[0x10] = 0;
  iVar2 = FUN_00426354(puVar1 + 0x11);
  return iVar2 + -0x44;
}
