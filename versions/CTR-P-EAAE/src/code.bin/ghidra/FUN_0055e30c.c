/**
 * FUN_0055e30c.c
 * Source line: 803616
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0055e30c(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  FUN_00135740(0xae53d4);
  piVar2 = (int *)param_1[9];
  uVar3 = param_1[7];
  (**(code **)*param_1)(param_1);
  if ((piVar2 != NULL) && (iVar1 = (**(code **)(*piVar2 + 0x48))(piVar2), iVar1 != 0)) {
    (**(code **)(*piVar2 + 0x1c))(piVar2,uVar3);
  }
  FUN_00137e84(0xae53d4);
  return;
}
