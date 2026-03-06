/**
 * FUN_0031f69c.c
 * Source line: 423184
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_0031f69c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00723fa0();
  FUN_002e333c(param_1 + iVar1 * 0x2b4 + 0x3d4,param_3);
  iVar1 = FUN_00723fa0(param_1,param_2);
  *(char *)(param_1 + iVar1 * 0x2b4 + 0x4ad) = (char)param_3;
  return;
}
