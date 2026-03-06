/**
 * FUN_00150b94.c
 * Source line: 165085
 * Body lines: 4
 */
#include "../../../include/types.h"

void * FUN_00150b94(void *param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = param_2 & 0xff | (param_2 & 0xff) << 8;
  _memset(param_1,param_3,uVar1 | uVar1 << 0x10);
  return param_1;
}
