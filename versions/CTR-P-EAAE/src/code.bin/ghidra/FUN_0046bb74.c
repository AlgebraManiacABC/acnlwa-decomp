/**
 * FUN_0046bb74.c
 * Source line: 637450
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0046bb74(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0046d3e4(param_2);
  if (((iVar1 != 0) && (uVar2 = FUN_0046eaac(param_2,8), uVar2 < 8)) &&
     (iVar1 = FUN_0046d3fc(param_2), iVar1 == 0)) {
    FUN_00307990(param_1 + 0xc,param_2);
    return 0;
  }
  uVar3 = FUN_0046dc40(0x1a);
  return uVar3;
}
