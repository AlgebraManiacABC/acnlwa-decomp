/**
 * FUN_004fe1a8.c
 * Source line: 745140
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_004fe1a8(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00902ff4;
  if (param_1[0x6d] != 0) {
    FUN_00307888(param_1[0x6d],&UNK_005230d0);
    param_1[0x6d] = 0;
  }
  FUN_004fdfd4(param_1);
  FUN_002ffb64();
  return;
}
