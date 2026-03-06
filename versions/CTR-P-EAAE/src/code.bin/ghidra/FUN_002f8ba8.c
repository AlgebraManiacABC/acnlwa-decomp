/**
 * FUN_002f8ba8.c
 * Source line: 391532
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_002f8ba8(uint *param_1,uint *param_2)

{
  if ((*param_1 & 0x40000000) == 0 && (*param_2 & 0x40000000) == 0) {
    FUN_0015120c(*param_1,param_1[1],param_1[2]);
    FUN_001510d0();
  }
  return;
}
