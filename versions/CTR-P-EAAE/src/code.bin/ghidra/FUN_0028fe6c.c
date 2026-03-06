/**
 * FUN_0028fe6c.c
 * Source line: 334393
 * Body lines: 10
 */
#include "../../../include/types.h"

int FUN_0028fe6c(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_00521a8c();
  *puVar1 = &UNK_008f0724;
  iVar2 = FUN_0034af5c(puVar1 + 5);
  iVar2 = FUN_004f0d90(iVar2 + 0x94);
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  iVar2 = FUN_005673c8(iVar2 + 0x14);
  return iVar2 + -0xbc;
}
