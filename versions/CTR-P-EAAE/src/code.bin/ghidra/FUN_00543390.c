/**
 * FUN_00543390.c
 * Source line: 786542
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00543390(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  FUN_00135740(param_1 + 0x70);
  if (*(int *)(param_1 + 0x68) != 0) {
    iVar3 = *(int *)(param_1 + 0x6c);
    iVar1 = *(int *)(param_1 + 100);
    while (puVar2 = (undefined4 *)(iVar1 - iVar3),
          puVar2 != (undefined4 *)((param_1 + 0x60) - *(int *)(param_1 + 0x6c))) {
      (**(code **)*puVar2)(puVar2);
      iVar1 = *(int *)((int)puVar2 + iVar3 + 4);
    }
  }
  FUN_00137e84(param_1 + 0x70);
  return;
}
