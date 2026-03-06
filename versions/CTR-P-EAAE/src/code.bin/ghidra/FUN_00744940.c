/**
 * FUN_00744940.c
 * Source line: 1100949
 * Body lines: 8
 */
#include "../../../include/types.h"

int FUN_00744940(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x18))();
  iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x18))();
  if (iVar2 < iVar1) {
    iVar2 = iVar1;
  }
  return iVar2;
}
