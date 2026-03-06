/**
 * FUN_006b9d14.c
 * Source line: 1016624
 * Body lines: 2
 */
#include "../../../include/types.h"

void FUN_006b9d14(int param_1,ushort param_2)

{
  *(ushort *)(param_1 + 2) = param_2 & 0x3fff | 0x800 | *(ushort *)(param_1 + 2) & 0xc000;
  return;
}
