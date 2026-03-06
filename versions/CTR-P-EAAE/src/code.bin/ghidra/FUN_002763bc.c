/**
 * FUN_002763bc.c
 * Source line: 321273
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_002763bc(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_2 == 0) {
    if (DAT_0094d548 != 0) {
      iVar1 = DAT_0094d548 + 0x244;
      *(undefined4 *)(param_1 + 0x118) = param_3;
      *(int *)(param_1 + 0x11c) = iVar1;
    }
  }
  else if (param_2 == 1) {
    *(undefined4 *)(param_1 + 0x118) = param_3;
    *(undefined1 *)(param_1 + 0x124) = 3;
  }
  *(int *)(param_1 + 0x10) = param_2;
  return;
}
