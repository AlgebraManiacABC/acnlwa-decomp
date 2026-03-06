/**
 * FUN_00689a30.c
 * Source line: 991468
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_00689a30(int param_1)

{
  FUN_00685c18();
  FUN_001abbbc(param_1 + 0x14);
  FUN_001d1cd0(param_1 + 0x1b4);
  FUN_001d2e98(0x3f800000,param_1 + 0x1b4);
  *(undefined4 *)(param_1 + 0x854) = 0x3f800000;
  return;
}
