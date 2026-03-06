/**
 * FUN_006fb604.c
 * Source line: 1055362
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_006fb604(int param_1,undefined4 param_2,int param_3)

{
  Fg_t *pFVar1;
  int iVar2;
  
  if (param_3 == 0) {
    return;
  }
  pFVar1 = FUN_002feb00(param_3,param_1,param_2,0);
  if ((pFVar1 != NULL) && (iVar2 = FUN_0059daa0(), iVar2 != 0)) {
    FUN_0059e65c(param_1,param_2,1);
    return;
  }
  return;
}
