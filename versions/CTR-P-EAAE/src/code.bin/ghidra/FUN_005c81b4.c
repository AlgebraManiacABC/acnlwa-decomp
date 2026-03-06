/**
 * FUN_005c81b4.c
 * Source line: 876894
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_005c81b4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005c33d0(4,0,param_3,param_4,param_4);
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = FUN_0066b13c(iVar1,param_1,1,0,param_2);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = 1;
    }
  }
  return uVar2;
}
