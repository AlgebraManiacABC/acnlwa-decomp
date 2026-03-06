/**
 * FUN_002e9a54.c
 * Source line: 383775
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_002e9a54(int param_1)

{
  *(undefined4 *)(param_1 + 0xb0) = 0x6000027;
  if (*(char *)(param_1 + 0xb4) == '\0') {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_002d1bcc(param_1 + 4,0x9841d4);
    FUN_0012e804(0,param_1 + 0xb8);
    FUN_0012e804(0,param_1 + 0xcc);
    *(undefined1 *)(param_1 + 0xb4) = 1;
  }
  *(undefined1 *)(param_1 + 0xe1) = 0xff;
  return;
}
