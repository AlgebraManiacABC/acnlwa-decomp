/**
 * FUN_0057be18.c
 * Source line: 824388
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0057be18(int param_1)

{
  FUN_00580490(param_1,1);
  if (DAT_0095e0cb == '\x10') {
    FUN_00522ae0(uRam0095e0fc,1);
    FUN_00501990(*(undefined4 *)(param_1 + 0x568),0);
  }
  *(undefined1 *)(param_1 + 0x11c5) = 1;
  if ((*(code **)(param_1 + 0xb0) != FUN_0057e024) || (*(int *)(param_1 + 0xb4) != 0)) {
    FUN_0081aef8(param_1 + 0xa4,FUN_0057da44,0);
  }
  return;
}
