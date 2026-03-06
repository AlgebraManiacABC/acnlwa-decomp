/**
 * FUN_001563d0.c
 * Source line: 169553
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_001563d0(uint param_1)

{
  if (iRam00975284 != 0) {
    *(uint *)(iRam00975284 + 0xc4) = 1 << (param_1 & 0xff) | *(uint *)(iRam00975284 + 0xc4);
  }
  return;
}
