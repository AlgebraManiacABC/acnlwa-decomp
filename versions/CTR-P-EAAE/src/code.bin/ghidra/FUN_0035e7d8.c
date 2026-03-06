/**
 * FUN_0035e7d8.c
 * Source line: 463811
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0035e7d8(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &UNK_008fb57c;
  if ((int *)param_1[3] != NULL) {
    (**(code **)(*(int *)param_1[3] + 4))();
  }
  if ((int *)param_1[9] != NULL) {
    (**(code **)(*(int *)param_1[9] + 4))();
  }
  FUN_003cd414();
  iVar1 = FUN_003cdf60(param_1 + 10);
  iVar1 = FUN_00378050(iVar1 + -0x18);
  FUN_00383420(iVar1 + -0x10);
  return;
}
