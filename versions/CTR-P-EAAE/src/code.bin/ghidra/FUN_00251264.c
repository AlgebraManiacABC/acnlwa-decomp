/**
 * FUN_00251264.c
 * Source line: 302830
 * Body lines: 9
 */
#include "../../../include/types.h"

int FUN_00251264(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_00521a8c();
  *puVar1 = &UNK_008eeadc;
  iVar2 = FUN_005673c8(puVar1 + 5);
  iVar2 = FUN_004ee594(iVar2 + 8);
  iVar2 = FUN_00301d0c(iVar2 + 0x11c,&UNK_0029e9c8,4,2);
  iVar2 = FUN_00301d0c(iVar2 + 8,&UNK_001be9ec,4,2);
  return iVar2 + -0x140;
}
