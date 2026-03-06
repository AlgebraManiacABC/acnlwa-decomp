/**
 * FUN_00522ae0.c
 * Source line: 765765
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00522ae0(int param_1,int param_2)

{
  FUN_005234d8(param_1,1);
  FUN_0052296c(param_1,0);
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  }
  return;
}
