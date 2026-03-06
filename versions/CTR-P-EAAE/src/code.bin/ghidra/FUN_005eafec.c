/**
 * FUN_005eafec.c
 * Source line: 899632
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_005eafec(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x8c) + 0x14);
  if ((piVar1 != NULL) && (iVar2 = (**(code **)(*piVar1 + 0x98))(), iVar2 == 0)) {
    *(undefined1 *)(param_1 + 0x91) = 0;
  }
  return;
}
