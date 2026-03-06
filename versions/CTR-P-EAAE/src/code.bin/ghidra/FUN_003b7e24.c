/**
 * FUN_003b7e24.c
 * Source line: 526526
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_003b7e24(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1[0x11];
  *param_1 = &UNK_008fd9ec;
  if (piVar2 != NULL) {
    (**(code **)(*piVar2 + 4))(piVar2);
    param_1[0x11] = 0;
  }
  iVar1 = FUN_00370900(param_1 + 0x12);
  FUN_0037de88(iVar1 + -0x48);
  FUN_00354ba0();
  return;
}
