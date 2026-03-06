/**
 * FUN_0022f734.c
 * Source line: 284345
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0022f734(int param_1)

{
  int iVar1;
  
  if (DAT_0094ddc5 == '\0') {
    iVar1 = FUN_00626318();
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x48);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x44) + 1;
    }
    *(int *)(param_1 + 0x44) = iVar1;
  }
  else {
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x48);
  }
  return;
}
