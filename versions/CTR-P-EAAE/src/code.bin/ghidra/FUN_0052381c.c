/**
 * FUN_0052381c.c
 * Source line: 766388
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0052381c(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[1];
  *param_1 = &UNK_00903728;
  if (piVar1 != NULL) {
    (**(code **)(*piVar1 + 4))(piVar1);
    param_1[1] = 0;
  }
  FUN_002ffb64(param_1);
  return;
}
