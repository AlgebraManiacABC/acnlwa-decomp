/**
 * FUN_002bd0f4.c
 * Source line: 358368
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_002bd0f4(int param_1)

{
  *(undefined4 *)(param_1 + 0xb0) = 0x600001a;
  *(undefined2 *)(param_1 + 0xe2) = 0;
  *(undefined2 *)(param_1 + 0xe4) = 0;
  if (*(char *)(param_1 + 0xb4) == '\0') {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_002d1bcc(param_1 + 4,0x9841d4);
    FUN_0012e804(0,param_1 + 0xb8);
    FUN_0012e804(0,param_1 + 0xcc);
    *(undefined1 *)(param_1 + 0xb4) = 1;
  }
  return;
}
