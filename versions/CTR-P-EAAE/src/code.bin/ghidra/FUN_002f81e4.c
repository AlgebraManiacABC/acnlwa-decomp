/**
 * FUN_002f81e4.c
 * Source line: 390429
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_002f81e4(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x2434);
  if (((int)param_2 < iVar1) || (iVar1 + 4U <= param_2)) {
    iVar1 = -1;
  }
  else {
    iVar1 = param_2 - iVar1;
  }
  uVar2 = FUN_001df368();
  FUN_006cce5c(uVar2,*(int *)(param_1 + 0x185c),
               *(int *)(param_1 + *(int *)(param_1 + 0x185c) * 4 + 0x1860) + -1,iVar1,param_3);
  return;
}
