/**
 * FUN_00450a44.c
 * Source line: 616668
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00450a44(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x18) = 0;
  while (iVar2 != 0) {
    iVar2 = switchD_00228cb8::caseD_4();
    if ((iVar2 != 0) && (piVar1 = (int *)(iVar2 - *(int *)(param_1 + 0x14)), piVar1 != NULL)) {
      (**(code **)(*piVar1 + 4))();
    }
    iVar2 = *(int *)(param_1 + 0x10);
  }
  return;
}
