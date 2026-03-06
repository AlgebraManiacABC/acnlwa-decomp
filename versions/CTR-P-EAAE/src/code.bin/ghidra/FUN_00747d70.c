/**
 * FUN_00747d70.c
 * Source line: 1103931
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_00747d70(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x24);
  uVar1 = 1;
  if (((0 < iVar2) && (iVar3 = *(int *)(param_1 + 0x14) - iVar2, iVar3 <= param_2)) &&
     (param_2 < iVar3 + iVar2)) {
    uVar1 = 0;
  }
  iVar3 = *(int *)(param_1 + 0x28);
  if (((0 < iVar3) && (iVar2 = (*(int *)(param_1 + 0x14) - iVar2) - iVar3, iVar2 <= param_2)) &&
     (param_2 < iVar2 + iVar3)) {
    uVar1 = 0;
  }
  return uVar1;
}
