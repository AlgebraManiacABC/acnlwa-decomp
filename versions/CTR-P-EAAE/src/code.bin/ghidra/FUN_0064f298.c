/**
 * FUN_0064f298.c
 * Source line: 961109
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0064f298(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  Fg_t *pFVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_006a5e34();
  if ((iVar1 != 0) && (pFVar2 = FUN_002feb00(iVar1,param_3,param_4,param_5), pFVar2 != NULL)) {
    FUN_0059a9ac(param_2,pFVar2,param_3,param_4,param_5);
    return;
  }
  FUN_006a5f0c(param_2,param_3,param_4);
  uVar3 = FUN_006c602c(param_3,param_4,0);
  *(undefined4 *)(param_2 + 4) = uVar3;
  return;
}
