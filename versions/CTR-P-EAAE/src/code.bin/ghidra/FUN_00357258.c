/**
 * FUN_00357258.c
 * Source line: 458129
 * Body lines: 3
 */
#include "../../../include/types.h"

void FUN_00357258(undefined4 *param_1,int param_2)

{
  FUN_0035724c(param_2,*param_1);
  *(ushort *)(param_2 + 6) = *(ushort *)(param_1 + 1) << 8 | *(ushort *)(param_1 + 1) >> 8;
  return;
}
