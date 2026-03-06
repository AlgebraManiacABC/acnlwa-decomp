/**
 * FUN_00561fcc.c
 * Source line: 806627
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00561fcc(undefined4 *param_1)

{
  *param_1 = &UNK_0090600c;
  if (param_1 == puRam009753d4) {
    puRam009753d4 = NULL;
    (**(code **)(*piRam009753d0 + 4))();
    piRam009753d0 = NULL;
  }
  FUN_0013efb4(param_1);
  return;
}
