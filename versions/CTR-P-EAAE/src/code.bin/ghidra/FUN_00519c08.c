/**
 * FUN_00519c08.c
 * Source line: 759591
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_00519c08(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_18;
  
  uVar2 = 1;
  uStack_18 = param_4;
  iVar1 = FUN_0046a174();
  if (-1 < iVar1) {
    iVar1 = FUN_0046aad8(0);
    if (-1 < iVar1) {
      uVar2 = FUN_0051a044(&uStack_18,param_1,param_2);
    }
    FUN_0046eaf0();
  }
  return uVar2;
}
