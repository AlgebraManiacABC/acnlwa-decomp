/**
 * FUN_007516a4.c
 * Source line: 1107735
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_007516a4(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = GET_BYTE_00957322();
  iVar2 = FUN_002f74e0(0x20,uVar1);
  if (((iVar2 == 0) && (iVar2 = FUN_002f74e0(0x200,uVar1), iVar2 == 0)) &&
     (iVar2 = FUN_002f74e0(0x40000000,uVar1), iVar2 == 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
