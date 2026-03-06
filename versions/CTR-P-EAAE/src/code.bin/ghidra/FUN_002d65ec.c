/**
 * FUN_002d65ec.c
 * Source line: 374190
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_002d65ec(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(code **)(param_1 + 0x48) != NULL) {
    (**(code **)(param_1 + 0x48))
              (*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),param_2,param_3,
               *(undefined4 *)(param_1 + 0x44));
  }
  return;
}
