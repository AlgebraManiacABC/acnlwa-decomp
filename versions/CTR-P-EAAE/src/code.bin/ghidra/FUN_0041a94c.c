/**
 * FUN_0041a94c.c
 * Source line: 584362
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 * FUN_0041a94c(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)FUN_00426f3c();
  puVar1[0x10] = 0;
  *puVar1 = &UNK_008ffd30;
  uVar2 = FUN_004264d8();
  iVar3 = FUN_0053ac4c(0x14,uVar2);
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar2 = FUN_00426354();
  }
  puVar1[0x11] = uVar2;
  return puVar1;
}
