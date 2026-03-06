/**
 * FUN_0076e1fc.c
 * Source line: 1131265
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0076e1fc(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (-1 < param_3) {
    iVar1 = FUN_00825d6c(param_1);
    uVar2 = 0;
    if ((iVar1 != 0) && (iVar1 = FUN_00745a44(iVar1,param_2,param_3), uVar2 = 0, iVar1 != 0)) {
      uVar2 = 1;
    }
    return uVar2;
  }
  return 0;
}
