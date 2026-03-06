/**
 * FUN_00540d8c.c
 * Source line: 785174
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_00540d8c(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(iVar1 + 0x2c) != 0) {
    iVar3 = *(int *)(iVar1 + 0x30);
    for (piVar2 = (int *)(*(int *)(iVar1 + 0x28) - iVar3);
        piVar2 != (int *)((*(int *)(param_1 + 4) + 0x24) - *(int *)(*(int *)(param_1 + 4) + 0x30));
        piVar2 = (int *)(*(int *)((int)piVar2 + iVar3 + 4) - iVar3)) {
      (**(code **)(*piVar2 + 0x38))(piVar2,param_2);
    }
  }
  return;
}
