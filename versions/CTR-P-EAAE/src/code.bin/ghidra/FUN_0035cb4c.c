/**
 * FUN_0035cb4c.c
 * Source line: 462326
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0035cb4c(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &UNK_008fb450;
  if ((int *)param_1[0x10] != NULL) {
    (**(code **)(*(int *)param_1[0x10] + 4))();
  }
  iVar1 = FUN_003cfa88(param_1 + 0x1c);
  iVar1 = FUN_003cfa88(iVar1 + -0x2c);
  *(undefined **)(iVar1 + -0x44) = &UNK_008fc18c;
  *(undefined4 *)(iVar1 + -0x40) = 0;
  return;
}
