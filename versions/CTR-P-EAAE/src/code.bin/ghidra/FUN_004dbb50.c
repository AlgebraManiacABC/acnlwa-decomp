/**
 * FUN_004dbb50.c
 * Source line: 722341
 * Body lines: 7
 */
#include "../../../include/types.h"

int FUN_004dbb50(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_002f7604();
  *puVar1 = &PTR_LAB_008f7224;
  iVar2 = FUN_00125aec(puVar1 + 0x39);
  iVar2 = FUN_00125aec(iVar2 + 0x28);
  return iVar2 + -0x10c;
}
