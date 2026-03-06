/**
 * FUN_0072ffe0.c
 * Source line: 1086801
 * Body lines: 7
 */
#include "../../../include/types.h"

int FUN_0072ffe0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0072f1d8(iRam00974a58);
  if (iVar1 != 0) {
    return *(int *)(*(int *)(iRam00974a58 + 0x18) + 0x3c);
  }
  iVar1 = (**(code **)(*param_1 + 0x50))(param_1);
  return 200 - iVar1;
}
