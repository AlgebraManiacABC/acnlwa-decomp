/**
 * FUN_005fac78.c
 * Source line: 910898
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_005fac78(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x8c) + 0x364);
  if ((piVar1 != NULL) && (iVar2 = (**(code **)(*piVar1 + 0xe8))(piVar1,param_2), iVar2 == 0)) {
    *(uint *)(param_1 + 4) = *(int *)(param_1 + 4) + (*(uint *)(param_2 + 0x14) >> 1) * -2;
    *(undefined1 *)(param_1 + 0xd2) = 5;
  }
  return;
}
