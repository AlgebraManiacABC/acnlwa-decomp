/**
 * FUN_00664b28.c
 * Source line: 972660
 * Body lines: 13
 */
#include "../../../include/types.h"

bool FUN_00664b28(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  iVar1 = FUN_001c4384();
  piVar2 = (int *)(iVar1 + 0xecd0);
  if ((((*(int **)(param_1 + 0x348) == piVar2) &&
       (uVar3 = *(uint *)(param_1 + 0x34c), uVar3 < *(uint *)(iVar1 + 0xecd4))) &&
      (iVar1 = (**(code **)(*piVar2 + 8))(piVar2,uVar3), iVar1 != 0)) &&
     ((piVar2 = piVar2 + uVar3 * 0x22a, piVar2 != (int *)0xfffffff4 && (piVar2[0x19d] != 0)))) {
    iVar1 = FUN_0027dc64(piVar2 + 0x19d);
    return iVar1 != 0;
  }
  return false;
}
