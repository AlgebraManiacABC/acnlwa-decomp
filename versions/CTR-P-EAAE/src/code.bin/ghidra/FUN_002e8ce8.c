/**
 * FUN_002e8ce8.c
 * Source line: 382989
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_002e8ce8(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_0020af18();
  *puVar1 = &UNK_008f8d88;
  iVar2 = FUN_00301d0c(puVar1 + 0x11,&UNK_00131800,4,1);
  iVar2 = FUN_00301d0c(iVar2 + 4,&UNK_001287a8,0x14,1);
  *(undefined **)(iVar2 + -0x48) = &UNK_008f3a64;
  *(undefined2 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0x3f800000;
  *(undefined1 *)(iVar2 + 0x1c) = 0;
  *(undefined4 *)(iVar2 + -0x44) = 6;
  return;
}
