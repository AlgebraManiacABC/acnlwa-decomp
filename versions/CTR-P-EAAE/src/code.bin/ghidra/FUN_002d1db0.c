/**
 * FUN_002d1db0.c
 * Source line: 370868
 * Body lines: 9
 */
#include "../../../include/types.h"

int FUN_002d1db0(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_0020af18();
  *puVar1 = &UNK_008f8dc8;
  iVar2 = FUN_00301d0c(puVar1 + 0x11,&UNK_00131800,4,2);
  iVar2 = FUN_00301d0c(iVar2 + 8,&UNK_001287a8,0x14,2);
  *(undefined **)(iVar2 + -0x4c) = &UNK_008f2c8c;
  iVar2 = FUN_00301d0c(iVar2 + 0x28,&UNK_0012e818,0x14,2);
  return iVar2 + -0x74;
}
