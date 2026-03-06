/**
 * FUN_00730244.c
 * Source line: 1086918
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00730244(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0072f1d8(iRam00974a58);
  if (iVar1 != 0) {
    nnnstdMemCpy(param_2,*(int *)(*(int *)(iRam00974a58 + 0x18) + 0x38) + param_3,param_4);
    return;
  }
  iVar1 = (**(code **)(*param_1 + 0x50))(param_1);
  nnnstdMemCpy(param_2,iVar1 + param_3,param_4);
  return;
}
