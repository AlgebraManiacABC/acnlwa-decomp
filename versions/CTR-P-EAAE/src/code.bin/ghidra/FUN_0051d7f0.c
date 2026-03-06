/**
 * FUN_0051d7f0.c
 * Source line: 762267
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0051d7f0(uint param_1)

{
  undefined4 *mem;
  
  mem = (undefined4 *)&DAT_00a82b90;
  if (param_1 < 4) {
    mem = (undefined4 *)(&DAT_00a82b90 + param_1 * 0x32);
  }
  __rt_memclr(mem,0x32);
  if (param_1 != 0) {
    FUN_0051e7d4(&DAT_00a82b90,3);
    return;
  }
  return;
}
