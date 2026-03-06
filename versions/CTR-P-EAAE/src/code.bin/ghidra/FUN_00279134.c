/**
 * FUN_00279134.c
 * Source line: 323029
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00279134(int param_1)

{
  *(undefined4 *)(param_1 + 0xb0) = 0x6000024;
  if (*(char *)(param_1 + 0xb4) == '\0') {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_002d1bcc(param_1 + 4,0x9841d4);
    FUN_0012e804(0,param_1 + 0xb8);
    FUN_0012e804(0,param_1 + 0xcc);
    *(undefined1 *)(param_1 + 0xb4) = 1;
  }
  *(undefined4 *)(param_1 + 0xe4) = 0xbf800000;
  *(undefined1 *)(param_1 + 0xe8) = 0;
  *(undefined1 *)(param_1 + 0xe9) = 0xff;
  return;
}
