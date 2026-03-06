/**
 * FUN_0072b154.c
 * Source line: 1083480
 * Body lines: 13
 */
#include "../../../include/types.h"

int FUN_0072b154(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + 0x105c);
  (**(code **)(*piVar1 + 8))();
  if (*(char *)(param_1 + 0x1086) != '\0') {
    (**(code **)(*piVar1 + 0xc))(piVar1);
    return 0;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x10b4) + 0x18);
  iVar3 = *(int *)(*(int *)(param_1 + 0x10b4) + 0x1c);
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return iVar3 - iVar2;
}
