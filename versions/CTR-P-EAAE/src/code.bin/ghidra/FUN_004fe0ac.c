/**
 * FUN_004fe0ac.c
 * Source line: 745090
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_004fe0ac(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  *(int *)(param_1 + 0x104) = param_2;
  do {
    piVar1 = *(int **)(param_1 + iVar2 * 4 + 4);
    if (piVar1 != NULL) {
      piVar1[0x23] = param_2;
      (**(code **)(*piVar1 + 0x14))();
    }
    iVar2 += 1;
  } while (iVar2 < 0x40);
  return;
}
