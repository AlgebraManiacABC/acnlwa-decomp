/**
 * FUN_0057957c.c
 * Source line: 822481
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_0057957c(int param_1)

{
  int iVar1;
  
  if ((int)((uint)*(byte *)(param_1 + 0xb08) << 0x1b) < 0) {
    iVar1 = FUN_002fc900();
    if ((iVar1 != 0) && (*(byte *)(*(int *)(param_1 + 0xaa0) + 5) >> 6 == 2)) {
      FUN_0029d354(*(int *)(param_1 + 0xaa0),*(undefined1 *)(param_1 + 0x95e));
    }
    FUN_00303fb4(param_1 + 0xb06,0x14,0);
  }
  return 1;
}
