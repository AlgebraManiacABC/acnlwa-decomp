/**
 * __aeabi_memset.c
 * Source line: 152174
 * Body lines: 4
 */
#include "../../../include/types.h"

void __aeabi_memset(void *param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = param_3 & 0xff | (param_3 & 0xff) << 8;
  _memset(param_1,param_2,uVar1 | uVar1 << 0x10);
  return;
}
