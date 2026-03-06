/**
 * FUN_002f6b8c.c
 * Source line: 388889
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_002f6b8c(int param_1)

{
  *(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) & 0xfffffffb;
  *(undefined4 *)(param_1 + 0xc4) = 0xc04;
  FUN_002f6a30();
  return;
}
