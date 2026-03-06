/**
 * FUN_002cdcb0.c
 * Source line: 368273
 * Body lines: 10
 */
#include "../../../include/types.h"

int FUN_002cdcb0(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_0022c53c();
  *puVar1 = &UNK_008f2a0c;
  puVar1[3] = &UNK_008f2a1c;
  iVar2 = FUN_00125aec(puVar1 + 0x50);
  iVar2 = FUN_00125aec(iVar2 + 0x28);
  iVar2 = FUN_00125aec(iVar2 + 0x28);
  iVar2 = FUN_00125aec(iVar2 + 0x28);
  return iVar2 + -0x1b8;
}
