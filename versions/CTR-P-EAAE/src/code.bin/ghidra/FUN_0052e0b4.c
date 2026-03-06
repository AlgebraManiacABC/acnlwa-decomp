/**
 * FUN_0052e0b4.c
 * Source line: 772729
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined2 FUN_0052e0b4(undefined4 param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  GET_BYTE_00957322();
  iVar2 = FUN_005b4c94();
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_0060c5c4(0);
    uVar1 = FUN_0075d4b0(uVar3,param_1);
  }
  return uVar1;
}
