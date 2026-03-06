/**
 * FUN_00317dec.c
 * Source line: 418881
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 * FUN_00317dec(undefined4 *param_1)

{
  *param_1 = &UNK_00906120;
  if ((int *)param_1[1] != NULL) {
    (**(code **)(*(int *)param_1[1] + 0x10))();
    param_1[1] = 0;
  }
  return param_1;
}
