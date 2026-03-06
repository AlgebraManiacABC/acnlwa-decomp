/**
 * FUN_0062abd8.c
 * Source line: 943581
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_0062abd8(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_0095362c + 0x13280;
  FUN_00135740(iVar1);
  if ((param_2 < 4) && (iVar2 = param_1 + param_2 * 0x18 + 8, iVar2 != 0)) {
    uVar3 = FUN_00626d40(iVar2,param_3,param_4);
    FUN_00137e84(iVar1);
    return uVar3;
  }
  FUN_00137e84(iVar1);
  return 0;
}
