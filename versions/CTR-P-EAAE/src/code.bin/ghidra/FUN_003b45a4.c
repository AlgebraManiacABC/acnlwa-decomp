/**
 * FUN_003b45a4.c
 * Source line: 524512
 * Body lines: 10
 */
#include "../../../include/types.h"

int FUN_003b45a4(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_00386ae0();
  *puVar1 = &UNK_008fd7c0;
  *(undefined1 *)(puVar1 + 0x26) = 0;
  iVar2 = FUN_003c9f08(puVar1 + 0x27);
  *(undefined4 *)(iVar2 + 0x44) = 0;
  *(undefined4 *)(iVar2 + 0x48) = 0;
  *(undefined2 *)(iVar2 + 0x20) = 0x6d;
  return iVar2 + -0x9c;
}
