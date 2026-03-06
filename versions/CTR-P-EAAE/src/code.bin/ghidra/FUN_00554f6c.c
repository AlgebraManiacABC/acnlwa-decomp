/**
 * FUN_00554f6c.c
 * Source line: 797709
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 * FUN_00554f6c(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  *param_1 = &UNK_009059b4;
  do {
    if ((int *)param_1[iVar1 + 2] != NULL) {
      (**(code **)(*(int *)param_1[iVar1 + 2] + 8))();
      param_1[iVar1 + 2] = 0;
    }
    iVar1 += 1;
  } while (iVar1 < 0x40);
  return param_1;
}
