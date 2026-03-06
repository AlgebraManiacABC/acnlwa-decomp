/**
 * FUN_0068fb08.c
 * Source line: 995679
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_0068fb08(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = GET_BYTE_00957322();
  iVar2 = FUN_002f74e0(4,uVar1);
  if (iVar2 != 0) {
    FUN_004ee39c(param_1 + 0x14);
    uRam0094f2dc = 0;
  }
  return 2;
}
