/**
 * FUN_005992fc.c
 * Source line: 845911
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_005992fc(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  Fg_t *pFVar3;
  
  uVar1 = GET_BYTE_00957322();
  iVar2 = FUN_002f74e0(4,uVar1);
  if (iVar2 != 0) {
    iVar2 = FUN_006a5e34();
    pFVar3 = FUN_002feb00(iVar2,param_1,param_2,0);
    if ((pFVar3 != NULL) && (iVar2 = FUN_002fccdc(), iVar2 != 0x1d)) {
      FUN_0059c934(param_1,param_2);
      return;
    }
  }
  return;
}
