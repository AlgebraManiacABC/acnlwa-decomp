/**
 * FUN_0053d6e8.c
 * Source line: 782601
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_0053d6e8(undefined4 *param_1)

{
  *param_1 = &UNK_00903d2c;
  if (param_1 == puRam0097d420) {
    puRam0097d420 = NULL;
    (**(code **)*puRam0097d41c)();
    puRam0097d41c = NULL;
  }
  FUN_0053d530(param_1);
  FUN_002ffb64();
  return;
}
