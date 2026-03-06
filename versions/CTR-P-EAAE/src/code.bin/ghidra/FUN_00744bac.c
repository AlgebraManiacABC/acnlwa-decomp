/**
 * FUN_00744bac.c
 * Source line: 1101062
 * Body lines: 8
 */
#include "../../../include/types.h"

int FUN_00744bac(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0xc))();
  iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0xc))();
  if (iVar2 < iVar1) {
    iVar2 = iVar1;
  }
  return iVar2;
}
