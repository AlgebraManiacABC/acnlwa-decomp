/**
 * FUN_00723858.c
 * Source line: 1078400
 * Body lines: 14
 */
#include "../../../include/types.h"

uint FUN_00723858(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x2434);
  if (((int)param_2 < iVar1) || (iVar1 + 4U <= param_2)) {
    iVar1 = -1;
  }
  else {
    iVar1 = param_2 - iVar1;
  }
  uVar2 = FUN_001df40c();
  uVar3 = FUN_0076ef60(uVar2,*(int *)(param_1 + 0x185c),
                       *(int *)(param_1 + *(int *)(param_1 + 0x185c) * 4 + 0x1860) + -1,iVar1);
  return uVar3 ^ 1;
}
