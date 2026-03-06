/**
 * FUN_0032a2e8.c
 * Source line: 430227
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 * FUN_0032a2e8(uint param_1,int *param_2)

{
  undefined4 *mem;
  
  mem = (undefined4 *)(**(code **)(*param_2 + 0x18))(param_2,param_1,4);
  if (mem != NULL) {
    __rt_memclr(mem,param_1);
  }
  return mem;
}
