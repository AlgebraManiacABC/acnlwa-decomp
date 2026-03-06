/**
 * FUN_005e18cc.c
 * Source line: 892761
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_005e18cc(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x26];
  *param_1 = &UNK_00908f54;
  param_1[0x23] = &PTR_PTR_00908f8c;
  if (piVar1 != NULL) {
    (**(code **)(*piVar1 + 4))(piVar1);
    param_1[0x26] = 0;
  }
  *param_1 = &DAT_0090aa8c;
  FUN_002ffb64(param_1);
  return;
}
