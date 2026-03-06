/**
 * FUN_00751514.c
 * Source line: 1107676
 * Body lines: 14
 */
#include "../../../include/types.h"

int * FUN_00751514(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  iVar1 = FUN_005b3ec4();
  piVar2 = (int *)(iVar1 + 0x18);
  if (((*(int **)(param_1 + 0x310) == piVar2) &&
      (uVar3 = *(uint *)(param_1 + 0x314), uVar3 < *(uint *)(iVar1 + 0x1c))) &&
     (iVar1 = (**(code **)(*piVar2 + 8))(piVar2,uVar3), iVar1 != 0)) {
    piVar2 = piVar2 + uVar3 * 5 + 3;
  }
  else {
    piVar2 = NULL;
  }
  return piVar2 + 1;
}
