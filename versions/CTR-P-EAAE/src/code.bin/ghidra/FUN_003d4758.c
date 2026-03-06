/**
 * FUN_003d4758.c
 * Source line: 545937
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_003d4758(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 0x70) == 0) {
    *(undefined4 *)(param_2 + 0x70) = param_3;
    uVar1 = 0x10001;
  }
  else {
    uVar1 = 0x8001000e;
  }
  param_1[2] = 0x71;
  *param_1 = uVar1;
  param_1[1] = &UNK_0089a66c;
  return;
}
