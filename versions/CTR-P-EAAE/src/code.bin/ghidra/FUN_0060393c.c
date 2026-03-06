/**
 * FUN_0060393c.c
 * Source line: 919381
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0060393c(int param_1,undefined1 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 extraout_r3;
  
  iVar1 = FUN_0075cf88(param_1,param_3);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 6) = param_2;
    *(char *)(param_1 + 7) = (char)param_3;
    *(undefined1 *)(param_1 + 8) = extraout_r3;
  }
  return;
}
