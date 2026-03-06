/**
 * FUN_00257080.c
 * Source line: 306231
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00257080(int param_1)

{
  DAT_0094fd58 = DAT_0094fd58 & 0xffffffef | 8;
  FUN_004b9b64(param_1 + 0x310);
  FUN_005697e0(0,param_1 + 0x2250);
  *(undefined1 *)(param_1 + 0x432) = 1;
  return;
}
