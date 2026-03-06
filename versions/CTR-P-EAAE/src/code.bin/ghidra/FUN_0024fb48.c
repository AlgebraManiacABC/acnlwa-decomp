/**
 * FUN_0024fb48.c
 * Source line: 301627
 * Body lines: 8
 */
#include "../../../include/types.h"

int FUN_0024fb48(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_002fd108(0xb4,*(undefined4 *)(param_1 + 4),4);
  *(undefined1 *)(puVar1 + 1) = 3;
  *(undefined1 *)((int)puVar1 + 5) = 0;
  *puVar1 = &UNK_008eea28;
  iVar2 = FUN_00277b4c(puVar1 + 2);
  return iVar2 + -8;
}
