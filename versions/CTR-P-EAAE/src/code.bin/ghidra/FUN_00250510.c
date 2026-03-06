/**
 * FUN_00250510.c
 * Source line: 302337
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00250510(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_0020af18();
  *puVar1 = &UNK_008f8d88;
  iVar2 = FUN_00301d0c(puVar1 + 0x11,&UNK_00131800,4,1);
  iVar2 = FUN_00301d0c(iVar2 + 4,&UNK_001287a8,0x14,1);
  *(undefined1 *)(iVar2 + 0x14) = 0;
  return;
}
