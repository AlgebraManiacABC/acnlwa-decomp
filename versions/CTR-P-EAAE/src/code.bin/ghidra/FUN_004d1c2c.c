/**
 * FUN_004d1c2c.c
 * Source line: 715527
 * Body lines: 13
 */
#include "../../../include/types.h"

int FUN_004d1c2c(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_004cdec8();
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  *puVar1 = &UNK_00902360;
  puVar1[0x11] = &PTR_LAB_00902390;
  *(undefined1 *)(puVar1 + 0x21) = 0;
  puVar1[0x43] = 0;
  puVar1[0x88] = 0;
  puVar1[0x89] = 0;
  iVar2 = FUN_00301d0c(puVar1 + 0x8a,&UNK_004cc49c,0x3c8,8);
  return iVar2 + -0x228;
}
