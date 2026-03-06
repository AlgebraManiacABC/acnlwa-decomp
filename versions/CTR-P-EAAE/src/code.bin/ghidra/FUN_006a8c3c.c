/**
 * FUN_006a8c3c.c
 * Source line: 1005114
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_006a8c3c(int param_1)

{
  *(undefined1 *)(param_1 + 0x25c) = 0;
  if (*(char *)(param_1 + 0xfa) == '\x01') {
    FUN_00568984(param_1 + 0x108,param_1 + 0xa4,*(undefined4 *)(param_1 + 0xf4),0);
          // WARNING: Subroutine does not return
    FUN_00568c10(param_1 + 0x108);
  }
  FUN_00568630(param_1 + 0x108,param_1 + 0x7c,*(undefined4 *)(param_1 + 0xf4),0);
  FUN_005697e0(0,param_1 + 0x7c);
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x108);
}
