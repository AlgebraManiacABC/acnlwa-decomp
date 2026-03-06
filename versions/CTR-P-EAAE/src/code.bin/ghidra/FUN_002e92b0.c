/**
 * FUN_002e92b0.c
 * Source line: 383311
 * Body lines: 10
 */
#include "../../../include/types.h"

int FUN_002e92b0(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_0020af18();
  *puVar1 = &UNK_008f8d88;
  iVar2 = FUN_00301d0c(puVar1 + 0x11,&UNK_00131800,4,1);
  iVar2 = FUN_00301d0c(iVar2 + 4,&UNK_001287a8,0x14,1);
  *(undefined ***)(iVar2 + -0x48) = &PTR_DAT_008f3ae4;
  iVar2 = FUN_00321c84(iVar2 + 0x14);
  iVar2 = FUN_003425ec(iVar2 + 0x5c);
  return iVar2 + -0xb8;
}
