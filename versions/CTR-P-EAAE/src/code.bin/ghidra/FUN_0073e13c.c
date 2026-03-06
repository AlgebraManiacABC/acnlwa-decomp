/**
 * FUN_0073e13c.c
 * Source line: 1096655
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0073e13c(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_1[0x87];
  if (((piVar1 == NULL) || (iVar2 = (**(code **)(*piVar1 + 8))(piVar1,param_2), iVar2 == 0)) &&
     (iVar2 = FUN_0073fb24(param_1 + 3,param_2), iVar2 == 0)) {
          // WARNING: Could not recover jumptable at 0x0073e198. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 0x10))(param_1,param_2);
    return;
  }
  return;
}
