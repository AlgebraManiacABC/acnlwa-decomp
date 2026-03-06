/**
 * FUN_006f86a4.c
 * Source line: 1053413
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_006f86a4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_002f74e0(0x80,param_1,param_3,param_4,param_4);
  if (iVar1 != 0) {
    FUN_006f9638(param_1);
    uVar2 = FUN_002fae84();
    return uVar2;
  }
  iVar1 = FUN_002f74e0(0x2000,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_002fae84(param_1 + -0x56);
  return uVar2;
}
