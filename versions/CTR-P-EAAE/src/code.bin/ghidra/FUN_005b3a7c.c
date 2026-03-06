/**
 * FUN_005b3a7c.c
 * Source line: 864064
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_005b3a7c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_0051fe30();
  iVar2 = FUN_00747abc(uVar1,0x20d,0);
  uVar1 = 0;
  if (((iVar2 != 0) && (iVar3 = GET_BYTE_00957322(), iVar3 == 0xa4)) &&
     ((param_1 != 0 || (iVar3 = FUN_00755afc(iVar2,1), iVar3 != 0)))) {
    uVar1 = 1;
    *(undefined1 *)(iVar2 + 0x404) = 1;
  }
  return uVar1;
}
