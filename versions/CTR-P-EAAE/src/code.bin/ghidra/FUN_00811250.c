/**
 * FUN_00811250.c
 * Source line: 1220876
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00811250(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[1];
  *param_1 = &PTR_s_in_00904c08;
  if (piVar1 != NULL) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  FUN_002ffb64(param_1);
  return;
}
