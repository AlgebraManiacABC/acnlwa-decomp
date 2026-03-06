/**
 * FUN_0032f06c.c
 * Source line: 433155
 * Body lines: 15
 */
#include "../../../include/types.h"

int FUN_0032f06c(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_006aa9d0();
  puVar1[0xb] = 0;
  *(undefined1 *)(puVar1 + 0xc) = 0;
  puVar1[0xf] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *(undefined1 *)(puVar1 + 0x10) = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  *puVar1 = &UNK_008f5890;
  puVar1[10] = &UNK_008f58fc;
  iVar2 = FUN_006b0824(puVar1 + 0x13);
  return iVar2 + -0x4c;
}
