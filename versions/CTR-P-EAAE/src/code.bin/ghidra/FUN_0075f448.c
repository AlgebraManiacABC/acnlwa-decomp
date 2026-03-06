/**
 * FUN_0075f448.c
 * Source line: 1119655
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0075f448(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_0095362c + 0x13280;
  FUN_00135740(iVar1);
  if ((param_2 < 4) && (param_1 + param_2 * 0x18 != -8)) {
    uVar2 = FUN_0075ef68();
    FUN_00137e84(iVar1);
    return uVar2;
  }
  FUN_00137e84(iVar1);
  return 0;
}
