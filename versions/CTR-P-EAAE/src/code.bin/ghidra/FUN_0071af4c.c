/**
 * FUN_0071af4c.c
 * Source line: 1073513
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0071af4c(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(int **)(param_1 + 0xb4) != NULL) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0xb4) + 0x40))();
    uVar2 = *(undefined4 *)(iVar1 + 0x8c);
    uVar3 = *(undefined4 *)(iVar1 + 0x9c);
    param_2[2] = *(undefined4 *)(iVar1 + 0xac);
    *param_2 = uVar2;
    param_2[1] = uVar3;
  }
  return;
}
