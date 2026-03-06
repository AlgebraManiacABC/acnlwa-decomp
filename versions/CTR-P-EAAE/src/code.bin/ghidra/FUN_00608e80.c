/**
 * FUN_00608e80.c
 * Source line: 922342
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00608e80(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_009506c2 == '\0') {
    uVar2 = FUN_00308340();
    FUN_005b4d04(uVar2,0,0,1,1);
  }
  else {
    iVar1 = FUN_002ff8b0(4);
    uVar2 = FUN_00308340();
    FUN_005b522c(uVar2,iVar1 + 2,1,0,1,1);
    DAT_009506c2 = '\0';
  }
  FUN_0081c0a0(param_1);
  return;
}
