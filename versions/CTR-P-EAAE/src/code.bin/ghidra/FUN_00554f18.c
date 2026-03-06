/**
 * FUN_00554f18.c
 * Source line: 797689
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_00554f18(undefined4 *param_1)

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
  FUN_002ffb64(param_1);
  return;
}
