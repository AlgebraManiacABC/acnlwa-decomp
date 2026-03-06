/**
 * FUN_004473e8.c
 * Source line: 609456
 * Body lines: 8
 */
#include "../../../include/types.h"

int FUN_004473e8(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_00426f3c();
  puVar1[0x10] = 0;
  *puVar1 = &UNK_00900c30;
  puVar1[0x11] = 0;
  iVar2 = FUN_00426354(puVar1 + 0x12);
  return iVar2 + -0x48;
}
