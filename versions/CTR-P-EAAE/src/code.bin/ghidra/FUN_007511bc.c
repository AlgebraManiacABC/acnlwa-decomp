/**
 * FUN_007511bc.c
 * Source line: 1107503
 * Body lines: 13
 */
#include "../../../include/types.h"

int * FUN_007511bc(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  piVar2 = (int *)(DAT_0094f310 + 0x14);
  if (((*(int **)(param_1 + 0x318) == piVar2) &&
      (uVar3 = *(uint *)(param_1 + 0x31c), uVar3 < *(uint *)(DAT_0094f310 + 0x18))) &&
     (iVar1 = (**(code **)(*piVar2 + 8))(piVar2,uVar3), iVar1 != 0)) {
    piVar2 = piVar2 + uVar3 * 5 + 3;
  }
  else {
    piVar2 = NULL;
  }
  return piVar2 + 1;
}
