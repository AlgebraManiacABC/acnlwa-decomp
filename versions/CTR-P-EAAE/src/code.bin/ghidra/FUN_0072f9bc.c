/**
 * FUN_0072f9bc.c
 * Source line: 1086606
 * Body lines: 15
 */
#include "../../../include/types.h"

uint FUN_0072f9bc(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint local_10;
  
  local_10 = param_4;
  iVar1 = FUN_007304d0();
  if ((iVar1 != 0) || (iVar1 = FUN_007304f4(param_1), uVar2 = 0, iVar1 != 0)) {
    uVar2 = FUN_00467608(&local_10);
    if ((uVar2 & 0x80000000) == 0) {
      uVar2 = local_10 & 0xff;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
