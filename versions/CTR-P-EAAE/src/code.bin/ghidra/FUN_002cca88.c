/**
 * FUN_002cca88.c
 * Source line: 367412
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_002cca88(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_002b7938();
  *puVar1 = &UNK_008f270c;
  iVar2 = FUN_00301d0c(puVar1 + 0x290,FUN_002b9440,0x36c,8);
  iVar2 = FUN_002cdcb0(iVar2 + 0x1b60);
  *(undefined4 *)(iVar2 + 0x1e0) = 0;
  *(undefined1 *)(iVar2 + 0x1e4) = 0;
  *(char **)(iVar2 + -0x257c) = "cng_rntl";
  return;
}
