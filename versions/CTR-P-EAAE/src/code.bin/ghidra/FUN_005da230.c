/**
 * FUN_005da230.c
 * Source line: 886914
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_005da230(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = FUN_007559a0(param_3);
  iVar2 = (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x34c) + 0x18))();
  bVar3 = iVar2 == 0;
  if (-1 < iVar2) {
    bVar3 = iVar1 == iVar2;
  }
  if (bVar3 || (-1 >= iVar2 || iVar1 < iVar2)) {
    iVar2 = iVar1 + -1;
  }
  *param_2 = iVar2;
  return 1;
}
