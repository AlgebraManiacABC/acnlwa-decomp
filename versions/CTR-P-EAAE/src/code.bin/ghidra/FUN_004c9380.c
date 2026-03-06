/**
 * FUN_004c9380.c
 * Source line: 708837
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_004c9380(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  if ((*param_2 == 0x50545343) && (param_2[2] - 0x10000U < 0x10201)) {
    *param_1 = param_2;
    piVar1 = (int *)FUN_007405c4(param_2);
    if ((*piVar1 == 0x4f464e49) && (piVar2 = (int *)FUN_00740630(*param_1), *piVar2 == 0x54414450))
    {
      param_1[1] = piVar1 + 2;
      param_1[2] = piVar2 + 2;
    }
  }
  return;
}
