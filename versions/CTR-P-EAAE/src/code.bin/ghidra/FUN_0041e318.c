/**
 * FUN_0041e318.c
 * Source line: 586164
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0041e318(undefined4 *param_1)

{
  *param_1 = &UNK_008fff18;
  if (param_1[6] != 0) {
    FUN_0053814c();
    param_1[6] = 0;
  }
  if (param_1[0xb] != 0) {
    FUN_0053814c();
    param_1[0xb] = 0;
  }
  if (param_1[0xc] != 0) {
    FUN_0053814c();
    param_1[0xc] = 0;
  }
  FUN_0041cf34(param_1);
  return;
}
