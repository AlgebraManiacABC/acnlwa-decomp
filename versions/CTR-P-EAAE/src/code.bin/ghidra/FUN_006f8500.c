/**
 * FUN_006f8500.c
 * Source line: 1053347
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_006f8500(uint *param_1,float *param_2,float *param_3)

{
  ushort uVar1;
  uint local_10;
  
  uVar1 = FUN_00565cc0(*param_3 - *param_2,param_3[2] - param_2[2]);
  local_10 = (uint)uVar1;
  *param_1 = (local_10 + 0x2000) * 0x10000 >> 0x1e;
  return;
}
