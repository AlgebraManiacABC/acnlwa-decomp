/**
 * FUN_00360904.c
 * Source line: 465223
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00360904(undefined4 *param_1)

{
  *param_1 = &UNK_008fb5c8;
  if ((int *)param_1[7] != NULL) {
    (**(code **)(*(int *)param_1[7] + 4))();
  }
  if ((int *)param_1[6] != NULL) {
    (**(code **)(*(int *)param_1[6] + 4))();
  }
  FUN_003b18ac(param_1);
  return;
}
