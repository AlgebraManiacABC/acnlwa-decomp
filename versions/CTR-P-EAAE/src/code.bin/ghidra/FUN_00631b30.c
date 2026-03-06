/**
 * FUN_00631b30.c
 * Source line: 948273
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00631b30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_8;
  
  if ((*(int *)(param_1 + 0x1028) != 0) &&
     (uStack_8 = param_4,
     iVar1 = FUN_003314f8(&uStack_8,*(int *)(param_1 + 0x1028) + 0x8e6,
                          *(undefined4 *)(param_1 + 0x1030)), iVar1 != 0)) {
    FUN_007d0e6c(4,&uStack_8);
  }
  return;
}
