/**
 * FUN_002993a0.c
 * Source line: 339288
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_002993a0(int param_1)

{
  *(undefined1 *)(param_1 + 0x6fa) = 1;
  if (*(char *)(param_1 + 0x6f9) == '\x01') {
    return;
  }
  *(undefined1 *)(param_1 + 0x6f9) = 1;
  FUN_00568630(param_1 + 0x24c,param_1 + 0x398,*(undefined4 *)(param_1 + 0x78c),0);
  FUN_005697e0(0x3f800000,param_1 + 0x398);
  if (*(char *)(param_1 + 0x744) == '\x03') {
    FUN_006aa944(*(undefined4 *)(param_1 + 0x764));
    FUN_0058d3b4(0x10003a5);
    *(undefined1 *)(param_1 + 0x6ff) = 1;
  }
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x24c);
}
