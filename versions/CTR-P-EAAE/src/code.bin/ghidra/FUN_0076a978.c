/**
 * FUN_0076a978.c
 * Source line: 1128086
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_0076a978(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_007684a4();
  if ((((iVar1 == 0) || (iVar1 = FUN_004e0f14(param_1), iVar1 == 0)) ||
      (iVar2 = FUN_00744df8(iVar1,1), iVar2 == 0)) ||
     ((iVar1 = switchD_00543ff8::caseD_7(iVar1,1), iVar1 == 0 ||
      (iVar1 = FUN_0076a068(param_1), iVar1 != 0)))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}
