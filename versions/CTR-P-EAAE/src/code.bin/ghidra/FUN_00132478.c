/**
 * FUN_00132478.c
 * Source line: 138851
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00132478(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  while (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 8);
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 4) = 0;
    iVar1 = iVar2;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}
