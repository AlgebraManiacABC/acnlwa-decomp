/**
 * FUN_00210bac.c
 * Source line: 270961
 * Body lines: 8
 */
#include "../../../include/types.h"

int FUN_00210bac(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_002fd108(0x60,*(undefined4 *)(param_1 + 4),4);
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined1 *)((int)puVar1 + 5) = 0;
  *puVar1 = &UNK_008edc04;
  iVar2 = FUN_00246bd4(puVar1 + 2);
  return iVar2 + -8;
}
