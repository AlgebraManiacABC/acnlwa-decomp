/**
 * FUN_003608a8.c
 * Source line: 465203
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_003608a8(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[7];
  *param_1 = &UNK_008fb5c8;
  if (piVar1 != NULL) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  if ((int *)param_1[6] != NULL) {
    (**(code **)(*(int *)param_1[6] + 4))();
  }
  FUN_003b18ac(param_1);
  FUN_00354ba0();
  return;
}
