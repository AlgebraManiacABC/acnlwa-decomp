/**
 * FUN_00381e10.c
 * Source line: 488656
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00381e10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(param_1 + 4);
  iVar1 = thunk_FUN_003619b0(0xc);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00358344();
  }
  FUN_003859d8(param_2,uVar2,param_3,uVar3,param_4,0,2);
  return;
}
