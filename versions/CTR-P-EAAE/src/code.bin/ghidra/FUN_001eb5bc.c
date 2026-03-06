/**
 * FUN_001eb5bc.c
 * Source line: 252070
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_001eb5bc(int param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_002554bc();
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(int *)(param_1 + 0x19c) = (int)(fVar1 * 30.0);
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined2 *)(param_1 + 0x200) = *(undefined2 *)(param_1 + 0x3a);
  FUN_0027d790(param_1,*(undefined4 *)(param_1 + 400));
  return;
}
