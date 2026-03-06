/**
 * FUN_002dbe94.c
 * Source line: 376239
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_002dbe94(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0072355c();
  FUN_002f7780(param_1 + 0x20ac,uVar1);
  uVar1 = FUN_0072355c(param_1 + 0x4b4);
  FUN_002f7804(param_1 + 0x20ac,uVar1);
  *(undefined1 *)(param_1 + 0x5c70) = 1;
  FUN_0029b6c8(param_1 + 0x4b4);
  FUN_0058d3b4(0x1000393);
  return;
}
