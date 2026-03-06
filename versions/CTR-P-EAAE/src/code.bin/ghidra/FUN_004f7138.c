/**
 * FUN_004f7138.c
 * Source line: 741867
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_004f7138(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00304c1c(0x8000);
  if ((iVar1 == 0) ||
     (iVar1 = FUN_004dad20(*(undefined4 *)(param_1 + 0x30),param_1 + 0x1c), iVar1 == 0)) {
    if (*(char *)(param_1 + 0x11a) == '\0') {
      if (0 < *(int *)(param_1 + 0x58)) {
        FUN_0058d3b4(*(undefined4 *)(*(int *)(param_1 + 0x30) + 0x1a0));
      }
    }
    FUN_004ff188(param_1,2);
    *(undefined4 *)(param_1 + 0x10) = 2;
  }
  return;
}
