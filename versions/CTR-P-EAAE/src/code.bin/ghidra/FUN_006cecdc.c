/**
 * FUN_006cecdc.c
 * Source line: 1029912
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_006cecdc(undefined4 *param_1)

{
  *param_1 = &UNK_0090b0e8;
  if (param_1 == puRam0094e4bc) {
    puRam0094e4bc = NULL;
    (**(code **)*_DAT_0094e4b8)();
    _DAT_0094e4b8 = NULL;
  }
  FUN_0013efb4(param_1);
  FUN_002ffb64();
  return;
}
