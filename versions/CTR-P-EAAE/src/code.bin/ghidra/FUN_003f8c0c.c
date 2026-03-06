/**
 * FUN_003f8c0c.c
 * Source line: 565645
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 * FUN_003f8c0c(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)FUN_003e32e0();
  *puVar1 = &PTR_LAB_008ff16c;
  puVar1[0xee] = 0;
  puVar1[0xef] = 0;
  uVar2 = FUN_004264d8();
  iVar3 = FUN_0053ac4c(0x20,uVar2);
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar2 = FUN_003572dc();
  }
  puVar1[0xf0] = uVar2;
  return puVar1;
}
