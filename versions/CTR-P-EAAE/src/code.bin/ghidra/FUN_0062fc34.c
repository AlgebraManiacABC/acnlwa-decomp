/**
 * FUN_0062fc34.c
 * Source line: 946949
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0062fc34(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = FUN_002fb378();
  uVar2 = GET_BYTE_00957322();
  iVar3 = FUN_002f74e0(0x20000,uVar2);
  if (iVar3 != 0) {
    FUN_0062ff8c();
    return;
  }
  FUN_0062fed4(uVar1);
  return;
}
