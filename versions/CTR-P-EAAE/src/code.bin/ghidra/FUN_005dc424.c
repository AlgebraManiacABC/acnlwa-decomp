/**
 * FUN_005dc424.c
 * Source line: 887958
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_005dc424(undefined4 param_1,uint *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_007559a0(param_3);
  iVar1 = FUN_005c710c();
  uVar3 = 0;
  if ((iVar1 != 0) && (uVar2 = FUN_007165d0(), uVar2 < 10)) {
    uVar3 = uVar2;
  }
  *param_2 = uVar3;
  return 1;
}
