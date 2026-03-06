/**
 * FUN_006863b4.c
 * Source line: 989741
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_006863b4(int param_1)

{
  FUN_001d1cd0(0x3f800000,param_1 + 0x1b4);
  FUN_001d2e98(0x3f800000,param_1 + 0x1b4);
  *(undefined4 *)(param_1 + 0x854) = 0x3f800000;
  *(byte *)(param_1 + 0x172) = *(byte *)(param_1 + 0x172) & 0xf7;
  return;
}
