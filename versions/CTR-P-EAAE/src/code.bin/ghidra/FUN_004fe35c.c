/**
 * FUN_004fe35c.c
 * Source line: 745208
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_004fe35c(undefined4 *param_1)

{
  *param_1 = &UNK_00903014;
  if (param_1[0x5d] != 0) {
    FUN_002f88b8(param_1[0x5d]);
    param_1[0x5d] = 0;
  }
  FUN_004fdfd4(param_1);
  FUN_002ffb64();
  return;
}
