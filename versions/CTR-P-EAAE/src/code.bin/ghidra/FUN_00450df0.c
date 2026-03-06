/**
 * FUN_00450df0.c
 * Source line: 616866
 * Body lines: 14
 */
#include "../../../include/types.h"

int FUN_00450df0(int param_1,int param_2)

{
  if (param_1 != param_2) {
    FUN_00426950(param_1 + 4,param_2 + 4);
    *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_2 + 0x21);
    *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
    *(undefined1 *)(param_1 + 0x25) = *(undefined1 *)(param_2 + 0x25);
    *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(param_2 + 0x23);
    *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
    *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_2 + 0x26);
  }
  return param_1;
}
