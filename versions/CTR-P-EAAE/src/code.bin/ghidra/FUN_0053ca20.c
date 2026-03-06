/**
 * FUN_0053ca20.c
 * Source line: 781996
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0053ca20(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  FUN_00538188();
  piVar2 = (int *)param_1[8];
  uVar3 = param_1[6];
  (**(code **)*param_1)(param_1);
  if ((piVar2 != NULL) && (iVar1 = (**(code **)(*piVar2 + 0x44))(piVar2), iVar1 != 0)) {
    (**(code **)(*piVar2 + 0x1c))(piVar2,uVar3);
  }
  FUN_00538274(0xae70c0);
  return;
}
