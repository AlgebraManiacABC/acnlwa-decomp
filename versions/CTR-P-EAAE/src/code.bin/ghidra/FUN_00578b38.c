/**
 * FUN_00578b38.c
 * Source line: 821920
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00578b38(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_007523a8();
  if (iVar1 != 0) {
    iVar2 = FUN_00300904();
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = *(int *)(param_1 + 0xaa0);
    }
    if (iVar2 != 0 && iVar1 != 0) {
      FUN_0029cf30(iVar1,*(undefined1 *)(param_1 + 0x95e),0);
      return;
    }
  }
  return;
}
