/**
 * FUN_003cf38c.c
 * Source line: 541158
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_003cf38c(int param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar1 = FUN_003cf6cc();
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  return;
}
