/**
 * FUN_00627fe0.c
 * Source line: 941359
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00627fe0(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < 4) {
    param_1 += param_2 * 4;
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 != -1) {
      *(int *)(param_1 + 0x1c) = iVar1 + 1;
    }
  }
  return;
}
