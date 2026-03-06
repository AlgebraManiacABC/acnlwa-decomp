/**
 * FUN_001ac694.c
 * Source line: 216305
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_001ac694(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x18))();
  if ((iVar1 != 0) && (iVar2 = FUN_00723e4c(), iVar2 != 0)) {
    FUN_0031d7f4(0,0x3f800000,iVar1,0x14b,0);
    return;
  }
  return;
}
