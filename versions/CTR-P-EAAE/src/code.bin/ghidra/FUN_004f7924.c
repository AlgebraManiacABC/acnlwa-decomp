/**
 * FUN_004f7924.c
 * Source line: 742185
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_004f7924(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00304c1c(0x8000);
  if ((iVar1 == 0) ||
     (iVar1 = FUN_004dad20(*(undefined4 *)(param_1 + 0x30),param_1 + 0x1c), iVar1 == 0)) {
    FUN_004ff188(param_1,2);
    if (0 < *(int *)(param_1 + 0x58)) {
      FUN_0058d3b4(*(undefined4 *)(*(int *)(param_1 + 0x30) + 0x1a0));
    }
    *(undefined4 *)(param_1 + 0x10) = 2;
  }
  return;
}
