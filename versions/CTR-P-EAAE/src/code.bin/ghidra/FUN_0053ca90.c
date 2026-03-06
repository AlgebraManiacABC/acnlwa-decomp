/**
 * FUN_0053ca90.c
 * Source line: 782016
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0053ca90(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*(uint *)(param_1 + 0x6c) & 1) != 0) {
    FUN_00538188();
    iVar1 = param_1 + 0x50;
  }
  FUN_0053aef0(param_1,0);
  FUN_0053d230(param_1 + 0x84);
  FUN_0053d230(param_1 + 0x74);
  FUN_0053c7b8(param_1);
  if (iVar1 == 0) {
    return;
  }
  FUN_00538274(iVar1);
  return;
}
