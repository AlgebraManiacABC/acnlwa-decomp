/**
 * FUN_00585d4c.c
 * Source line: 832108
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00585d4c(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00584134();
  iVar2 = FUN_00753088(uVar1,0x15);
  if (iVar2 != 0) {
    uVar1 = FUN_00584134();
    iVar2 = FUN_00753088(uVar1,0x22);
    if (iVar2 == 0) {
      uVar1 = FUN_00584134();
      FUN_0058c5f0(uVar1,0x15);
      return;
    }
  }
  return;
}
