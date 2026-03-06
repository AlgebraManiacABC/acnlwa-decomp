/**
 * FUN_00811340.c
 * Source line: 1220932
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00811340(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[1];
  *param_1 = &UNK_00904c50;
  if (piVar1 != NULL) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  FUN_002ffb64(param_1);
  return;
}
