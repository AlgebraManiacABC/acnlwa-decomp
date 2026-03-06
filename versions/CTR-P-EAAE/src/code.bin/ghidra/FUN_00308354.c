/**
 * FUN_00308354.c
 * Source line: 406390
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00308354(int param_1)

{
  uint uVar1;
  
  FUN_003084d0();
  uVar1 = 0;
  do {
    FUN_003084f8(uVar1 * 0xf2 + param_1 + 0x30);
    uVar1 += 1;
  } while (uVar1 < 0x10);
  FUN_0027a48c(param_1 + 0xf66);
  return;
}
