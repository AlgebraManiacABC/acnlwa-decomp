/**
 * FUN_002c9e8c.c
 * Source line: 366358
 * Body lines: 11
 */
#include "../../../include/types.h"

int FUN_002c9e8c(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_00521a8c();
  *puVar1 = &UNK_008f2590;
  iVar2 = FUN_00301d0c(puVar1 + 5,FUN_003166a8,0x18,4);
  iVar2 = FUN_00301d0c(iVar2 + 0x60,FUN_003166a8,0x18,4);
  iVar2 = FUN_00301d0c(iVar2 + 0x60,FUN_003166a8,0x18,4);
  iVar2 = FUN_00301d0c(iVar2 + 0x60,FUN_003166a8,0x18,4);
  iVar2 = FUN_00301d0c(iVar2 + 0xac,FUN_003040fc,0xc,4);
  iVar2 = FUN_00301d0c(iVar2 + 0x44,FUN_00250510,0x60,4);
  return iVar2 + -0x224;
}
