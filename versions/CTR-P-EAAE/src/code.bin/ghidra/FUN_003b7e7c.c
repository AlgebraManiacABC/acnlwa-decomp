/**
 * FUN_003b7e7c.c
 * Source line: 526546
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_003b7e7c(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &UNK_008fd9ec;
  if ((int *)param_1[0x11] != NULL) {
    (**(code **)(*(int *)param_1[0x11] + 4))();
    param_1[0x11] = 0;
  }
  iVar1 = FUN_00370900(param_1 + 0x12);
  FUN_0037de88(iVar1 + -0x48);
  return;
}
