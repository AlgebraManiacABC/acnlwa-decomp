/**
 * FUN_006da79c.c
 * Source line: 1036510
 * Body lines: 8
 */
#include "../../../include/types.h"

int FUN_006da79c(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_00521a8c();
  *puVar1 = &UNK_008f93e0;
  iVar2 = FUN_005673c8(puVar1 + 5);
  iVar2 = FUN_002bb4a0(iVar2 + 0x18);
  iVar2 = FUN_00301d0c(iVar2 + 8,&UNK_002c3af0,8,4);
  return iVar2 + -0x34;
}
