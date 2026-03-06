/**
 * FUN_001511dc.c
 * Source line: 165491
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_001511dc(uint *param_1,uint *param_2)

{
  if ((*param_1 & 0x40000000) == 0 && (*param_2 & 0x40000000) == 0) {
    FUN_0015120c(*param_1,param_1[1],param_1[2]);
    FUN_00151074();
  }
  return;
}
