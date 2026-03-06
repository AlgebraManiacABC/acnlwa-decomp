/**
 * FUN_001408c8.c
 * Source line: 153074
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_001408c8(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_2 + 4);
  piVar2 = *(int **)(param_2 + 8);
  *(int **)(iVar1 + 4) = piVar2;
  *piVar2 = iVar1;
  *(int *)(param_1 + 0x1dc) = *(int *)(param_1 + 0x1dc) + -1;
  *(int *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  return;
}
