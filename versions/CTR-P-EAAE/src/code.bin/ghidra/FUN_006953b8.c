/**
 * FUN_006953b8.c
 * Source line: 998846
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_006953b8(int param_1,int param_2,undefined1 param_3)

{
  if (*(char *)(param_1 + 0x611) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x611) = (char)param_2;
  *(undefined1 *)(param_1 + 0x618) = param_3;
  FUN_0081b218(param_1 + 0x14,FUN_00694990,0);
  return;
}
