/**
 * FUN_0026e2d8.c
 * Source line: 316827
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0026e2d8(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  uVar1 = GET_BYTE_00957322();
  iVar2 = FUN_002f74e0(8,uVar1);
  if ((iVar2 != 0) && (uVar3 = Item_Param11Valid(param_2), uVar3 != 0)) {
    uVar4 = FUN_0076a280(param_2);
  }
  return uVar4;
}
