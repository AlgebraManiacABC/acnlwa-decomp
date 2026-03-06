/**
 * FUN_005694c8.c
 * Source line: 810914
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_005694c8(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x18) != NULL) {
    (**(code **)**(undefined4 **)(param_1 + 0x18))();
    FUN_0013ad90(*(undefined4 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_002f88b8(*(undefined4 *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}
