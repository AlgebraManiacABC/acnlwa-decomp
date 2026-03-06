/**
 * FUN_0056d828.c
 * Source line: 814516
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0056d828(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = FUN_00301e20(param_2);
  if (iVar1 != 0) {
    local_10 = CONCAT22(local_10._2_2_,*(undefined2 *)(param_2 + 0x2c));
    FUN_0056d874(param_1,&local_10);
    return;
  }
          // WARNING: Could not recover jumptable at 0x0056d870. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x1c))(param_1);
  return;
}
