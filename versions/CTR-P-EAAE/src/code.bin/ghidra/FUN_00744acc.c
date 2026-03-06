/**
 * FUN_00744acc.c
 * Source line: 1101007
 * Body lines: 8
 */
#include "../../../include/types.h"

int FUN_00744acc(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 8) + 8))();
  iVar2 = (**(code **)(**(int **)(param_1 + 4) + 8))();
  if (iVar2 < iVar1) {
    iVar2 = iVar1;
  }
  return iVar2;
}
