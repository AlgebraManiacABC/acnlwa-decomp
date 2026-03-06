/**
 * FUN_0062f728.c
 * Source line: 946610
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0062f728(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = GET_BYTE_00957322();
  iVar2 = FUN_002f74e0(0x20000,uVar1);
  if ((iVar2 == 0) && (iVar2 = FUN_001e5e70(param_1,0), iVar2 == 9)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
