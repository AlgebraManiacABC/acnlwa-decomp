/**
 * FUN_007133d0.c
 * Source line: 1068439
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_007133d0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = DAT_00950148;
  if ((DAT_00950148 != 0) &&
     ((iVar1 = FUN_0069fd54(DAT_00950148), iVar1 != 0 || (iVar2 = FUN_0069af98(iVar2), iVar2 != 0)))
     ) {
    return 0;
  }
  uVar3 = FUN_00752690(param_1,param_2);
  return uVar3;
}
