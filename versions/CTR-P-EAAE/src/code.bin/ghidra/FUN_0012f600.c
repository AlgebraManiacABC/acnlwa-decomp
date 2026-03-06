/**
 * FUN_0012f600.c
 * Source line: 136089
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0012f600(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  FUN_0012f814(param_1 + 0x18,param_4);
  FUN_0012f824(param_1 + 0x18,param_5);
  FUN_0012f844(param_1 + 0x18,param_6);
  iVar1 = FUN_0012f664(param_1 + 0x18,param_2,param_3);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
  }
  return;
}
