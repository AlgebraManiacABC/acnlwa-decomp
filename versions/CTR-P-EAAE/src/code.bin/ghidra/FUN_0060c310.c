/**
 * FUN_0060c310.c
 * Source line: 923947
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0060c310(undefined4 *param_1)

{
  *param_1 = &UNK_0090ab50;
  if (param_1 == puRam009514c0) {
    puRam009514c0 = NULL;
    (**(code **)*puRam009514bc)();
    puRam009514bc = NULL;
  }
  FUN_0013efb4(param_1);
  return;
}
