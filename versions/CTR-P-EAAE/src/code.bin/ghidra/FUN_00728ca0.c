/**
 * FUN_00728ca0.c
 * Source line: 1081998
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 FUN_00728ca0(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined4 local_8;
  
  local_8 = param_4;
  lVar1 = _ll_sdiv(CONCAT44(param_1[1] + 0x395f + (uint)(0x83037bff < *param_1),
                            *param_1 + 0x7cfc8400),86400000);
  FUN_00129508(0,&local_8,0,(int)lVar1 + -0xb2407);
  return local_8;
}
