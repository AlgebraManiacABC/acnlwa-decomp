/**
 * FUN_00277fe4.c
 * Source line: 322563
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00277fe4(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_0020af18();
  *puVar1 = &UNK_008f8e48;
  iVar2 = FUN_00301d0c(puVar1 + 0x11,&UNK_00131800,4);
  iVar2 = FUN_00301d0c(iVar2 + 0x10,&UNK_001287a8,0x14,4);
  *(undefined **)(iVar2 + -0x54) = &UNK_008ef7d8;
  iVar2 = FUN_002a65d0(iVar2 + 0x50);
  *(undefined1 *)(iVar2 + 0x18) = 0;
  *(undefined4 *)(iVar2 + -0xa0) = 0;
  return;
}
