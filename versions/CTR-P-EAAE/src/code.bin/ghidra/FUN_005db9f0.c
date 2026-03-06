/**
 * FUN_005db9f0.c
 * Source line: 887686
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_005db9f0(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_007559a0(param_3);
  uVar2 = 1;
  iVar1 = FUN_005c710c();
  if ((iVar1 != 0) && (iVar1 = FUN_007165d0(), iVar1 == 1)) {
    uVar2 = 0;
  }
  *param_2 = uVar2;
  return 1;
}
