/**
 * FUN_002dead8.c
 * Source line: 376962
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_002dead8(int param_1)

{
  FUN_002f67ac();
  FUN_0029b5fc(param_1 + 0x4e18);
  *(undefined4 *)(param_1 + 0x6128) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x612c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x6138) = 0;
  FUN_002ccc5c(param_1 + 0x4c,*(short *)(param_1 + 0x6124) == 0);
  return;
}
