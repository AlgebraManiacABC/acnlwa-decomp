/**
 * FUN_00320584.c
 * Source line: 423644
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00320584(int param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((uVar1 <= param_2) && (param_2 < uVar1 + 10)) {
    param_1 += (param_2 - uVar1) * 0x2b4;
  }
  FUN_002b6d20(param_1 + 0x3d4,param_3);
  return;
}
