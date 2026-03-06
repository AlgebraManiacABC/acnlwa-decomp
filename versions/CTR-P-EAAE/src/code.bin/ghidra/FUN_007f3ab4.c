/**
 * FUN_007f3ab4.c
 * Source line: 1192682
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_007f3ab4(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_00569d50();
  FUN_002fd108(0x2b68,*(undefined4 *)(iVar1 + 4),4);
  puVar2 = (undefined4 *)FUN_007c7610();
  *puVar2 = &PTR_LAB_008eb218;
  iVar1 = FUN_00301d0c(puVar2 + 0x4b3,&UNK_001cbac8,0x5c,0x43);
  *(undefined4 *)(iVar1 + -0x904) = 0x21;
  *(undefined1 *)(iVar1 + -0x9a7) = 0;
  return;
}
