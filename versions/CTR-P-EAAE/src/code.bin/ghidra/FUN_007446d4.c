/**
 * FUN_007446d4.c
 * Source line: 1100824
 * Body lines: 8
 */
#include "../../../include/types.h"

int FUN_007446d4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x24))();
  iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x24))();
  if (iVar2 < iVar1) {
    iVar2 = iVar1;
  }
  return iVar2;
}
