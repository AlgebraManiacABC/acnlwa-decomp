/**
 * FUN_001cccfc.c
 * Source line: 234001
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_001cccfc(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = *(int **)(*(int *)(param_1 + 8) +
                     ((*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8)) / 0x28) * 0x28 + -0x24);
  if (piVar1 != NULL) {
    uVar2 = (**(code **)(*piVar1 + 0x5c))();
    iVar3 = *(int *)(param_1 + 8) +
            ((*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8)) / 0x28) * 0x28 + -0x28;
    FUN_001ac668(*(int *)(*(int *)(param_1 + 4) + 0x68) + 4,uVar2,0xc,(int)*(short *)(iVar3 + 0x22),
                 (int)*(short *)(iVar3 + 0x24));
  }
  return;
}
