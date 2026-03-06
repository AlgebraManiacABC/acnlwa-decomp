/**
 * FUN_002f80c8.c
 * Source line: 390320
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_002f80c8(undefined4 param_1,undefined4 param_2,int param_3)

{
  *(undefined4 *)(param_3 + 0xc) = param_2;
  *(undefined1 **)(param_3 + 0x14) = &LAB_002f80bc_1;
  *(undefined4 *)(param_3 + 0x20) = 0x1024ed;
  *(undefined4 *)(param_3 + 0x10) = 0;
  FUN_0010284c();
  return;
}
