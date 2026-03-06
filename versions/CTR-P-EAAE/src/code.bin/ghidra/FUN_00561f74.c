/**
 * FUN_00561f74.c
 * Source line: 806611
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00561f74(undefined4 *param_1)

{
  *param_1 = &UNK_0090600c;
  if (param_1 == puRam009753d4) {
    puRam009753d4 = NULL;
    (**(code **)(*piRam009753d0 + 4))();
    piRam009753d0 = NULL;
  }
  FUN_0013efb4(param_1);
  FUN_002ffb64();
  return;
}
