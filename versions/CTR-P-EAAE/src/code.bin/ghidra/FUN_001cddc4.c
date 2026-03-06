/**
 * FUN_001cddc4.c
 * Source line: 234591
 * Body lines: 2
 */
#include "../../../include/types.h"

void FUN_001cddc4(int param_1,byte param_2)

{
  *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) & 0xcf | (param_2 & 3) << 4;
  return;
}
