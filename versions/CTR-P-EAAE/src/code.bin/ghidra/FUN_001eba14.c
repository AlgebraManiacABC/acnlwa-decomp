/**
 * FUN_001eba14.c
 * Source line: 252236
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_001eba14(int param_1)

{
  undefined2 uVar1;
  
  uVar1 = FUN_00711bf4();
  *(undefined2 *)(param_1 + 0x1ca) = uVar1;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0x96;
  FUN_0027d790(param_1,*(undefined4 *)(param_1 + 400));
  return;
}
