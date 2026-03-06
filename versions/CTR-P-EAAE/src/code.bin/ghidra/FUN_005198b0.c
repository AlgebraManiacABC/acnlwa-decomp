/**
 * FUN_005198b0.c
 * Source line: 759310
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_005198b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_0046a174();
  if (-1 < iVar1) {
    iVar1 = FUN_0046aad8(0);
    if ((-1 < iVar1) ||
       ((iVar1 == -0x375f07be && (iVar1 = FUN_0046b320(param_1,param_2,0), -1 < iVar1)))) {
      uVar2 = 1;
    }
    FUN_0046eaf0();
    return uVar2;
  }
  return 0;
}
