/**
 * FUN_004c0300.c
 * Source line: 702303
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_004c0300(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_004c9268(param_1 + 0x120);
  FUN_004bfb2c(param_1,param_1 + 0x120);
  iVar1 = FUN_0073f0fc(param_1 + 0x120);
  FUN_0073f07c(param_1 + 0x120);
  FUN_004c92d0(param_1 + 0x120,param_2 + iVar1);
  iVar1 = FUN_0073f174(param_1 + 0x120);
  iVar2 = FUN_0073f13c(param_1 + 0x120);
  if (iVar1 != -1 && iVar2 != -1) {
    FUN_004c92dc(param_1 + 0x120,param_2 + iVar1);
  }
  *(int *)(param_1 + 0x11c) = param_2;
  return 1;
}
