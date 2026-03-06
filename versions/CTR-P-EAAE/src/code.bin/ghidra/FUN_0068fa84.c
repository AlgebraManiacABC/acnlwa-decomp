/**
 * FUN_0068fa84.c
 * Source line: 995640
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_0068fa84(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = GET_BYTE_00957322();
  iVar2 = FUN_002f74e0(4,uVar1);
  if (iVar2 == 0) {
    uVar1 = 1;
  }
  else {
    iRam0094f2dc = param_1;
    FUN_004f0b90(param_1 + 0x14,0);
    FUN_0068f8d4(param_1);
    FUN_004eabd0();
    uVar1 = 2;
  }
  return uVar1;
}
