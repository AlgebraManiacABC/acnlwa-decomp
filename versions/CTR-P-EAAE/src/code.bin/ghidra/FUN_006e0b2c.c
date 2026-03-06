/**
 * FUN_006e0b2c.c
 * Source line: 1040201
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_006e0b2c(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = GET_BYTE_00957322();
  iVar2 = FUN_002f74e0(0x80000,uVar1);
  if (iVar2 == 0) {
    uVar1 = GET_BYTE_00957322();
    iVar2 = FUN_002f74e0(0x100000,uVar1);
    if (iVar2 == 0) {
      return 0;
    }
  }
  return 1;
}
