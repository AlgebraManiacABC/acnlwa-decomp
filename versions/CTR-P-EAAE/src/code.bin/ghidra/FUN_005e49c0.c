/**
 * FUN_005e49c0.c
 * Source line: 894594
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_005e49c0(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  FUN_005e4a28();
  *(undefined1 *)(param_1 + 4) = 4;
  *(int *)(param_1 + 8) = param_2;
  if (param_3 < 0 || param_2 < param_3) {
    uVar1 = 0;
  }
  else {
    uVar1 = 2;
    *(int *)(param_1 + 0xc0) = param_3;
  }
  *(undefined1 *)(param_1 + 0xc4) = uVar1;
  *(undefined1 *)(param_1 + 0xc9) = 1;
  return;
}
