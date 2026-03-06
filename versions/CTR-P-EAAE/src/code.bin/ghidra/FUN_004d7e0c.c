/**
 * FUN_004d7e0c.c
 * Source line: 719895
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_004d7e0c(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004d7dfc();
  iVar2 = iVar1;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + 0x10);
  }
  if ((param_2 != 0 && iVar2 != 0) && ((*(byte *)(iVar2 + 0xb7) & 1) != 0)) {
    iVar1 = FUN_0073c0cc(iVar2,iVar1,param_3,param_1);
  }
  _DAT_00974a7c = iVar1;
  return;
}
