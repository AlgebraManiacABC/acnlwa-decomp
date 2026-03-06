/**
 * FUN_0065fc64.c
 * Source line: 970257
 * Body lines: 10
 */
#include "../../../include/types.h"

bool FUN_0065fc64(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  
  FUN_003171b4(&local_18,&uStack_14,param_2);
  iVar1 = FUN_005980c0(local_18,uStack_14);
  if (iVar1 != 0) {
    FUN_00598d20(local_18,uStack_14);
    FUN_0065ddfc(param_1,local_18,uStack_14);
  }
  return iVar1 != 0;
}
