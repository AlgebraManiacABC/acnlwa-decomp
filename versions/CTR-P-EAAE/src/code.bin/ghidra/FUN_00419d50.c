/**
 * FUN_00419d50.c
 * Source line: 583929
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 * FUN_00419d50(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)FUN_00426f3c();
  puVar1[0x10] = 0;
  *puVar1 = &UNK_008ffc34;
  uVar2 = FUN_004264d8();
  iVar3 = FUN_0053ac4c(0x14,uVar2);
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar2 = FUN_00426354();
  }
  puVar1[0x11] = uVar2;
  return puVar1;
}
