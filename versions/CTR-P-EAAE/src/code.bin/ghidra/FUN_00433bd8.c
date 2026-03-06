/**
 * FUN_00433bd8.c
 * Source line: 598978
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00433bd8(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_00426f3c();
  *puVar1 = &UNK_00900708;
  puVar1[0x10] = 0;
  iVar2 = FUN_00426354(puVar1 + 0x11);
  *(undefined4 *)(iVar2 + 0x14) = 0xe7e3ffff;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined4 *)(iVar2 + 0x20) = 0;
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  return;
}
