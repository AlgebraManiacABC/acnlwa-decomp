/**
 * FUN_005615f8.c
 * Source line: 806153
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_005615f8(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  piVar2 = (int *)param_1[9];
  uVar3 = param_1[7];
  (**(code **)*param_1)();
  if ((piVar2 != NULL) && (iVar1 = (**(code **)(*piVar2 + 0x48))(piVar2), iVar1 != 0)) {
          // WARNING: Could not recover jumptable at 0x00561644. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*piVar2 + 0x1c))(piVar2,uVar3);
    return;
  }
  return;
}
