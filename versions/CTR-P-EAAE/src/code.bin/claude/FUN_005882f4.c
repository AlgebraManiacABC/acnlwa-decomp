/**
 * FUN_005882f4.c
 * Source line: 833549
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_005882f4(int param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x19) = 0;
  iVar1 = FUN_0062f03c();
  if ((iVar1 == 3 || iVar1 == 4) || (iVar1 = FUN_00229c50(), iVar1 != 0)) {
    *(undefined1 *)(param_1 + 0x1e) = 1;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  return;
}
