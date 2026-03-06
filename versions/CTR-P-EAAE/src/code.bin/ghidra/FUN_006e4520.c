/**
 * FUN_006e4520.c
 * Source line: 1042074
 * Body lines: 2
 */
#include "../../../include/types.h"

void FUN_006e4520(int param_1)

{
  *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) & 0xfffc;
  return;
}
