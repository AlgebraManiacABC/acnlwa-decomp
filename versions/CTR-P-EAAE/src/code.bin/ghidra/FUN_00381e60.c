/**
 * FUN_00381e60.c
 * Source line: 488675
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00381e60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_r1;
  
  __aeabi_uidivmod(param_3,*(undefined4 *)(param_1 + 8));
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = thunk_FUN_003619b0(0xc);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_00358344();
  }
  FUN_003859d8(param_2,uVar3,param_4,extraout_r1 + iVar1,(int)param_5,
               (int)((ulonglong)param_5 >> 0x20),2);
  return;
}
