/**
 * FUN_004503cc.c
 * Source line: 616295
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_004503cc(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0x14);
  for (piVar2 = (int *)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x14));
      piVar2 != (int *)((param_1 - iVar1) + 8);
      piVar2 = (int *)(*(int *)((int)piVar2 + *(int *)(param_1 + 0x14) + 4) -
                      *(int *)(param_1 + 0x14))) {
    (**(code **)(*piVar2 + 0x14))(piVar2);
  }
  return;
}
