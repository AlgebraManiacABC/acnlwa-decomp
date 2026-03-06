/**
 * FUN_00327d4c.c
 * Source line: 428321
 * Body lines: 9
 */
#include "../../../include/types.h"

int FUN_00327d4c(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_002f7604();
  *puVar1 = &PTR_LAB_008f5084;
  iVar2 = FUN_00125aec(puVar1 + 0x39);
  iVar2 = FUN_00125aec(iVar2 + 0x28);
  iVar2 = FUN_00125aec(iVar2 + 0x28);
  iVar2 = FUN_00125aec(iVar2 + 0x28);
  return iVar2 + -0x15c;
}
