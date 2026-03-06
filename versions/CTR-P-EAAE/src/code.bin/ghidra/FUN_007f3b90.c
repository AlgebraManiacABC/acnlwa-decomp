/**
 * FUN_007f3b90.c
 * Source line: 1192728
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_007f3b90(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_00569d50();
  FUN_002fd108(0x228c,*(undefined4 *)(iVar1 + 4),4);
  puVar2 = (undefined4 *)FUN_007c7610();
  *puVar2 = &UNK_008eb55c;
  iVar1 = FUN_00301d0c(puVar2 + 0x4b3,&UNK_001cbac8,0x5c,0x2a);
  iVar1 = FUN_00301d0c(iVar1 + 0xf18,Item_Clear,4,0x2a);
  *(undefined4 *)(iVar1 + -0x181c) = 0x15;
  return;
}
