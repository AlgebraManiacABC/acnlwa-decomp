/**
 * FUN_004c7adc.c
 * Source line: 707492
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_004c7adc(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  if (param_2 == NULL) {
    return;
  }
  if ((*param_2 == 0x4b4e4243) && (param_2[2] - 0x1000000U < 0x101)) {
    *param_1 = param_2;
    iVar1 = FUN_0013c850(param_2);
    *(undefined1 *)(param_1 + 2) = 1;
    param_1[1] = iVar1 + 8;
  }
  return;
}
