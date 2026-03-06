/**
 * FUN_00291990.c
 * Source line: 335340
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00291990(int param_1)

{
  FUN_00291a18(param_1,(int)*(char *)(param_1 + 0xaad),6,*(undefined4 *)(param_1 + 0x688),
               *(undefined4 *)(param_1 + 0x68c));
  if ((DAT_00950708 == '\x03') && ('\0' < *(char *)(param_1 + 0xaab))) {
    FUN_00291a18(param_1,0x3c,6,*(undefined4 *)(param_1 + 0x680),*(undefined4 *)(param_1 + 0x684));
    return;
  }
  FUN_00291a18(param_1,(int)*(char *)(param_1 + 0xaac),6,*(undefined4 *)(param_1 + 0x680),
               *(undefined4 *)(param_1 + 0x684));
  return;
}
