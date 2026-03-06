/**
 * FUN_0053ded8.c
 * Source line: 782871
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0053ded8(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  FUN_00543698();
  iVar3 = *(int *)(param_1 + 0x158);
  iVar1 = *(int *)(param_1 + 0x150);
  while (piVar2 = (int *)(iVar1 - iVar3),
        piVar2 != (int *)((param_1 + 0x14c) - *(int *)(param_1 + 0x158))) {
    (**(code **)(*piVar2 + 0x14))(piVar2);
    iVar1 = *(int *)((int)piVar2 + iVar3 + 4);
  }
  return;
}
