/**
 * FUN_006934a0.c
 * Source line: 997912
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_006934a0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = GET_BYTE_00957322();
  iVar2 = FUN_002f74e0(0x80,uVar1);
  if ((((iVar2 != 0) || (iVar2 = FUN_002f74e0(0x40,uVar1), iVar2 != 0)) ||
      (iVar2 = FUN_002f74e0(0x2000,uVar1), iVar2 != 0)) ||
     (((iVar2 = FUN_002f74e0(0x4000,uVar1), iVar2 != 0 ||
       (iVar2 = FUN_002f74e0(0x20000000,uVar1), iVar2 != 0)) ||
      (iVar2 = FUN_005b4954(uVar1), uVar1 = 0, iVar2 != 0)))) {
    uVar1 = 1;
  }
  return uVar1;
}
