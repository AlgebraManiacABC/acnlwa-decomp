/**
 * FUN_005e45c4.c
 * Source line: 894310
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_005e45c4(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x38))(param_1);
  if (iVar1 != 0) {
    *(undefined1 *)((int)param_1 + 5) = 2;
  }
  return;
}
