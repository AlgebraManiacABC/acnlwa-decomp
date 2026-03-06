/**
 * FUN_00529ddc.c
 * Source line: 769913
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 * FUN_00529ddc(uint param_1)

{
  undefined4 *mem;
  
  mem = (undefined4 *)FUN_00779500();
  if (mem != NULL) {
    __rt_memclr(mem,param_1);
  }
  return mem;
}
