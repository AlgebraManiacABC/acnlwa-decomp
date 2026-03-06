/**
 * FUN_0056d9cc.c
 * Source line: 814614
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0056d9cc(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_005ca3b0(param_2);
  if (iVar1 != -1) {
    FUN_0075c0ec(DAT_0095debc,param_1,"STR_Fobj_name");
    return;
  }
          // WARNING: Could not recover jumptable at 0x0056da10. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x1c))(param_1);
  return;
}
