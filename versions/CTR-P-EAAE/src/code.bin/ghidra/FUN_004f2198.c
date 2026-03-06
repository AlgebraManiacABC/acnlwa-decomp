/**
 * FUN_004f2198.c
 * Source line: 739807
 * Body lines: 7
 */
#include "../../../include/types.h"

int FUN_004f2198(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_004ee4ec();
  *puVar1 = &UNK_00902b34;
  puVar1[2] = 0;
  iVar2 = FUN_0054a9f0(puVar1 + 4);
  return iVar2 + -0x10;
}
