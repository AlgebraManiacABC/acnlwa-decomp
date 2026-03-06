/**
 * FUN_005b2d10.c
 * Source line: 863705
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_005b2d10(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  __rt_memclr_w(param_2,0x6000);
  uVar2 = 0;
  iVar1 = FUN_0075dbc4(param_3);
  if ((iVar1 != 0) && (iVar1 = FUN_005b25d8(param_1 + 0x138,param_2,param_3), iVar1 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}
