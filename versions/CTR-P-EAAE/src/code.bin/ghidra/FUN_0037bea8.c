/**
 * FUN_0037bea8.c
 * Source line: 485274
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_0037bea8(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = FUN_003cd24c();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  iVar1 = *(int *)(param_1 + 0x144);
  iVar2 = *(int *)(param_1 + 0x148);
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return iVar2 - iVar1 >> 3;
}
