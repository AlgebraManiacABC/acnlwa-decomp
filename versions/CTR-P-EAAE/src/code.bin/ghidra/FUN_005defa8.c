/**
 * FUN_005defa8.c
 * Source line: 890517
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_005defa8(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x25];
  *param_1 = &UNK_00908ed8;
  param_1[0x23] = &PTR_PTR_00908f0c;
  if (piVar1 != NULL) {
    (**(code **)(*piVar1 + 4))(piVar1);
    param_1[0x25] = 0;
  }
  *param_1 = &DAT_0090aa8c;
  FUN_002ffb64(param_1);
  return;
}
