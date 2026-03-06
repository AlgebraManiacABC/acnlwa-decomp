/**
 * FUN_00572f50.c
 * Source line: 817967
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00572f50(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_18 [16];
  
  FUN_00573aec(param_1,auStack_18);
  iVar1 = (**(code **)(*param_1 + 200))(param_1);
  if ((iVar1 == 0) || (iVar1 = FUN_0056e5c4(param_1,auStack_18), iVar1 != 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  FUN_005770dc(param_1 + 0x18c,param_1,uVar2);
  return;
}
