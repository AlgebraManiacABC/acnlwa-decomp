/**
 * FUN_003205cc.c
 * Source line: 423659
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_003205cc(int param_1,uint param_2,undefined1 param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((uVar1 <= param_2) && (param_2 < uVar1 + 10)) {
    param_1 += (param_2 - uVar1) * 0x2b4;
  }
  *(undefined1 *)(param_1 + 0x4ad) = param_3;
  return;
}
