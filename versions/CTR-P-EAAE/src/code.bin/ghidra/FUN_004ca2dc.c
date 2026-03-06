/**
 * FUN_004ca2dc.c
 * Source line: 709659
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_004ca2dc(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x40) != 1) && (iVar2 = 0, 0 < *(int *)(param_1 + 8))) {
    do {
      iVar1 = *(int *)(param_1 + iVar2 * 4);
      if (iVar1 != 0) {
        FUN_00463120(iVar1,*(undefined4 *)(param_1 + 0x40));
      }
      iVar2 += 1;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  return;
}
