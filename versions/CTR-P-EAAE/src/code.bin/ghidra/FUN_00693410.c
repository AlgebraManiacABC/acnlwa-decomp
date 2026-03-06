/**
 * FUN_00693410.c
 * Source line: 997889
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_00693410(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = GET_BYTE_00957322();
  GET_BYTE_00957322();
  FUN_00313440();
  iVar2 = FUN_002fe450();
  iVar3 = FUN_002f74e0(0x80,uVar1);
  if ((((iVar3 == 0) && (iVar3 = FUN_002f74e0(0x4000,uVar1), iVar3 == 0)) &&
      (iVar3 = FUN_002f74e0(0x2000,uVar1), iVar3 == 0)) &&
     (((iVar3 = FUN_002f74e0(0x40,uVar1), iVar3 == 0 || (iVar2 == 0)) ||
      ((*(uint *)(iVar2 + 0x44) & 0x20) == 0)))) {
    return 0;
  }
  return 1;
}
