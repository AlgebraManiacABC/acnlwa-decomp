/**
 * FUN_0026d5b0.c
 * Source line: 316737
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_0026d5b0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = GET_BYTE_00957322();
  iVar2 = FUN_002f74e0(4,uVar1);
  uVar1 = 0;
  if (iVar2 != 0) {
    iVar2 = FUN_002fcb34(param_2);
    if (iVar2 == 0x27 || iVar2 == 0x28) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}
