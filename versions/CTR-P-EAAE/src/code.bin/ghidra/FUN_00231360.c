/**
 * FUN_00231360.c
 * Source line: 285928
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_00231360(int param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(*(int *)(param_1 + 0xf0) + 0xb06);
  *pbVar1 = *pbVar1 | 1;
  return;
}
