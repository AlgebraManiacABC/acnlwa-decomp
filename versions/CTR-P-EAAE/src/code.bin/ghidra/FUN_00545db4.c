/**
 * FUN_00545db4.c
 * Source line: 788512
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_00545db4(int param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 9) == '\0') {
    FUN_004ccdf8(0,0xae3fc0);
    FUN_00540d8c(param_1,param_2);
    *(undefined1 *)(param_1 + 9) = 1;
  }
  return;
}
