/**
 * FUN_00766b90.c
 * Source line: 1124791
 * Body lines: 14
 */
#include "../../../include/types.h"

int * FUN_00766b90(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  
  uVar2 = *(uint *)(*(int *)(param_1 + 0x4cc) + 0x1b4);
  if (uVar2 != 0) {
    piVar3 = (int *)(*(int *)(param_1 + 0x4cc) + 0x1b0);
    if (((*(int **)(param_1 + 0x264) == piVar3) &&
        (uVar4 = *(uint *)(param_1 + 0x268), uVar4 < uVar2)) &&
       (iVar1 = (**(code **)(*piVar3 + 8))(piVar3,uVar4), iVar1 != 0)) {
      return piVar3 + uVar4 * 0x98 + 3;
    }
  }
  return NULL;
}
