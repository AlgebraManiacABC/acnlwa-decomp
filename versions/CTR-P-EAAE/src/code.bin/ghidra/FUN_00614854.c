/**
 * FUN_00614854.c
 * Source line: 927307
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00614854(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_006f7e64();
  *puVar1 = &UNK_0090ab70;
  *(undefined1 *)(puVar1 + 4) = 0;
  iVar2 = FUN_006f7dc0(puVar1 + 5);
  *(undefined2 *)(iVar2 + 0x2c) = 0;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  return;
}
