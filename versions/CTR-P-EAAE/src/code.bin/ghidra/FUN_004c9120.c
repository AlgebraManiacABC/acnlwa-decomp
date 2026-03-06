/**
 * FUN_004c9120.c
 * Source line: 708664
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_004c9120(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  if ((*param_2 == 0x4d545343) && (param_2[2] + 0xfe000000U < 0x30101)) {
    *param_1 = param_2;
    iVar1 = FUN_0073eea4(param_2);
    param_1[1] = (int)param_2 + iVar1 + 8;
  }
  return;
}
