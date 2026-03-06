/**
 * FUN_0076e238.c
 * Source line: 1131284
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_0076e238(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (-1 < param_3) {
    iVar1 = FUN_00825d6c(param_1);
    uVar2 = 0;
    if ((iVar1 != 0) && (iVar1 = FUN_00745bd8(iVar1,param_2,param_3), uVar2 = 0, iVar1 != 0)) {
      if (param_4 != 0) {
        FUN_0052e3ec(param_2);
      }
      uVar2 = 1;
    }
    return uVar2;
  }
  return 0;
}
